#include <bits/stdc++.h>
#define MAX 1000000
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

ll t,x,y;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);

	cin>>t;
	while(t--){
		cin>>x>>y;
		ll ans=0;
		if((double)y/x<0.75){
			ll l=0,r=75*x;

			while(l<=r){
				ll mid=l+(r-l)/2;
				double cal=(double)(y+mid)/(x+mid);
				if(cal==0.75){
					l=mid;
					break;
				}
				else if(cal<0.75){
					l=mid+1;
				}
				else{
					r=mid-1;
				}
			}
			ans=l;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}