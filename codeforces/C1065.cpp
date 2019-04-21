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

ll n,k,arr[2*(ll)1e5+1];

// int main()
// {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);


// 	// freopen("../input.txt","r",stdin);
	
// 	cin>>n>>k;
// 	ll mi=MAX,mx=0;
// 	for (ll i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 		mi=min(mi,arr[i]);
// 		mx=max(mx,arr[i]);
// 	}
// 	if(n==1){
// 		cout<<0;
// 		return 0;
// 	}
// 	ll rsize=mx-mi+1;
// 	ll range[rsize];
// 	fill(range,range+rsize,0);
// 	for (ll i = 0; i < n; ++i)
// 	{
// 		range[arr[i]-mi]++;
// 	}
// 	ll ans=0,cal=0,sum=0;
// 	for(ll i=rsize-1;i>0;i--){
// 		sum+=range[i];
// 		// cout<<sum<<" ";
// 		if(cal+sum<=k){
// 			cal+=sum;
// 		}
// 		else{
// 			cal=sum;
// 			ans++;
// 		}
// 	}
// 	if(cal>0){
// 		ans++;
// 	}
// 	cout<<ans;
// 	return 0;
// }

//Another answer
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>n>>k;
	ll mi=MAX,mx=0,sum=0;
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
		mi=min(mi,arr[i]);
		mx=max(mx,arr[i]);
	}
	sort(arr,arr+n);
	ll temp=0,ans=0;
	for(ll i=n-1;i>0;i--){
		if(arr[i]!=arr[0]){
			ll pos=i;
			while(arr[i]==arr[pos]){
				pos--;
			}
			ll count=(n-1)-pos,diff=(arr[i]-arr[pos]);
			ll cal=count*diff;
			ans+=(cal/k);
			cal=cal%k;
			if(temp+cal<=k){
				temp+=cal;
			}
			else{
				ans+=(temp+cal)/k;
				temp=(temp+cal)%k;
			}
			
			
			i=pos+1;
			
			// cout<<temp<<" ";
		}
		else
			break;
	}
	// cout<<endl<<temp<<" ";
	if(temp>0){
		ans++;
	}
	cout<<ans;
	return 0;
}