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
const ll MOD = 10e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
bool prime[MAX+1];
std::vector<ll> vprimes;
int main()
{
	// freopen("../../input.txt","r",stdin);
	// freopen("../../output.txt","w",stdout);
	ll m,n;
	cin>>m>>n;
	ll a=max(m,n),b=min(m,n);
	ll sum=b-1;
	
	sum+=(b*(a-1));
	cout<<sum;
	return 0;
}