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

int t,e,p,k,r;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		cout<<"Case "<<cs<<": ";

		cin>>e>>p>>k>>r;
		if(p*k<e && p*k<=r){
			cout<<-1<<endl;
			continue;
		}
		ll ans=0;
		ll rt=p*k-r;
		while(e>p*k){
			ans+=k;
			e-=rt;
		}
		ans+=ceil((double)e/p);
		cout<<ans<<endl;

	}
	return 0;
}