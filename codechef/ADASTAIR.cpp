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

int t,n,k,arr[200];

int main()
{
	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int last=0,ans=0;
		for (int i = 0; i < n; ++i)
		{
			double diff=(arr[i]-last)/(double)k;
			if(diff==(int)diff){
				ans+=(int)diff-1;
				// ans+=(arr[i]-last)/k;
			}
			else{
				ans+=(int)diff;
			}
			last=arr[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}