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

ll n;
int t;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	freopen("../input.txt","r",stdin);
	
	string s;
	ll a;

	while(true){
		cin>>n>>t;
		if(n==0 && t==0){
			break;
		}
		cout<<n<<"\n";
		while(t--){
			cin>>s>>a;
		}
	}
	return 0;
}