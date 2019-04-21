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

int t,n,m,p;
string s;
char c;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n>>m;
		// cout<<n<<m;
		// break;
		ll ans=0;
		cin>>s;
		int l=0,r=n-1;
		map<int,int> notpal;
		while(l<r){
			if(s[l]!=s[r]){
				notpal[l]++;
				notpal[r]++;
			}
			l++,r--;
		}
		while(m--){
			cin>>p>>c;
			p--;
			s[p]=c;
			if(s[p]==s[n-1-p] && notpal[p]){
				notpal.erase(p);
				notpal.erase(n-1-p);
			}
			else if(s[p]==s[n-1-p]){
				notpal.erase(p);
			}
			if(s[p]!=s[n-1-p]){
				notpal[p]++;
				notpal[n-1-p]++;
			}
			if(notpal.size()==0){
				ans++;
			} 
		}
		cout<<ans<<"\n";
	}
	return 0;
}