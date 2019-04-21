#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

//typedefs
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef map<int, int> mii;

//Constants
const ll MOD = 10e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()



int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	ll n,t;
	cin>>n>>t;
	ll a[n],cf[n],m=MOD;
	ll sum=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		cf[i]=sum;
		m=min(m,a[i]);
	}
	ll ans=t/cf[n-1];
	t-=(ans*cf[n-1]);
	ans=ans*n;

	ll start=0,last=0;
	unordered_map<ll,ll> mp;
	while(t>=m){
		if(start==0){
			ll rem=t/cf[n-1];
			ans+=(rem*(n-last));
			t-=(rem*cf[n-1]);
		}
		if(mp[start]){
			start=(start+1)%(n);
			continue;
		}
		if(t>=a[start]){
			t-=a[start];
			ans++;
		}
		else{
			cf[n-1]-=a[start];
			// swap(a[start],a[n-1-last]);
			last++;
			mp[start]++;
		}
		start=(start+1)%(n);
		
	}
	// cout<<t<<" ";
	// for(ll i=n-1;i>=0;i--){
	// 	if(t>=cf[i]){
	// 		t-=cf[i];
	// 		start=i;
	// 		ans+=i+1;
	// 		break;
	// 	}
	// }

	// if(t<m){
	// 	cout<<ans;
	// 	return 0;
	// }
	// start++;
	// // unordered_map<ll,int> mp;
	// ll last=0;
	// for(;start<n-last;start++){
	// 	if(t>=a[start]){
	// 		t-=a[start];
	// 		ans++;
	// 	}
	// 	else{
	// 		cf[n-1]-=a[start];
	// 		// mp[start]++;
	// 		swap(a[start],a[n-1-last]);
	// 		last++;
	// 	}
	// }
	// ll rem=t/cf[n-1];
	// ans+=(rem*(n-last));
	// t-=(rem*cf[n-1]);

	// start=0;
	
	// while(t>=m){
	// 	if(t>=a[start]){
	// 		t-=a[start];
	// 		ans++;
	// 	}
	// 	else{
	// 		cf[n-1]-=a[start];
	// 		swap(a[start],a[n-1-last]);
	// 		last++;

	// 	}
	// 	start=(start+1)%(n-last);
	// 	if(start==0){
	// 		rem=t/cf[n-1];
	// 		ans+=(rem*(n-last));
	// 		t-=(rem*cf[n-1]);
	// 	}
	// }
	cout<<ans;

	return 0;
}