#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

//typedefs
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<long, long> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef map<int, int> mii;

//Constants
const ull MOD = 1e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
bool prime[MAX+1];
std::vector<ll> vprimes;
int main()
{
	freopen("../../input.txt","r",stdin);
	// freopen("../../output.txt","w",stdout);
	ull t;
	cin>>t;
	// cout<<t;
	while(t--){
		ull n;
		cin>>n;
		// cout<<n<<endl;
		// cout<< ((((n*(n+1))%MOD)-n)+MOD)%MOD<<" ";
		cout<< (((n%MOD)*((n+1)%MOD)-n%MOD)+MOD)%MOD<<"\n";		
		// ull sum=0;
		// ull in=1;
		// for (ull i = 1; in <= n; i+=2)
		// {
		// 	sum+=i%MOD;
		// 	in++;
		// }
		// cout<<sum%MOD<<endl;
	}
	return 0;
}