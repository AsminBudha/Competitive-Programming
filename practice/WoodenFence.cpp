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
ll n,x,y;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	cin>>T;
	while(T--){
		cin>>n>>x>>y;
		double a=n/(double)2;
		if(ceil(a)<=x && floor(a)<=y){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}