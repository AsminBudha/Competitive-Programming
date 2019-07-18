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

ll t,n,x;

int main()
{
	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		ll arr[n],sum=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		ll comp=sum*(n-1);
		ll ans=0;
		for(ll i=0;i<n;i++){
			float temp=(sum-arr[i])*(n);
			// cout<<temp<<"=>"<<avg<<endl;
			if(temp==comp){
				ans=i+1;
				break;
			}	
		}
		if(ans){
			cout<<ans<<endl;
		}
		else{
			cout<<"Impossible\n";
		}
	}
	return 0;
}