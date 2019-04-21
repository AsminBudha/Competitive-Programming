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

int T;
ll a,b,c;
int x;
double dist(pll l,pll m){
	ll f=l.first-m.first;
	ll s=l.second-m.second;
	return sqrt((double)f*f+(double)s*s);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	freopen("../input.txt","r",stdin);

	cin>>T;
	pll g,h,r;
	while(T--){
		cin>>a>>b>>c>>x;
		g={0,a},h={b,0},r={c,0};
		double ans=dist(h,r);
		
		double rtg=dist(r,g);
		ans+=rtg;
		double gth=dist(g,h);

		double per=gth*x/100;
		

		cout<<"\n";
	}
	return 0;
}