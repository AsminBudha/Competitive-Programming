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
map<long, long> cycle;
vector<long> vect(10001);
int n;
ll arr[100001];
ll temp[100001];
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;

	cout<<n<<endl;
	string s;
	while(cin>>s){
		cout<<s<<endl;
	}
	// cin>>n;
	// ll m=0;
	// for (ll i = 0; i < n; ++i)
	// {
	// 	cin>>arr[i];
	// 	temp[i]=arr[i];
	// }
	// sort(temp,temp+n);
	// for (ll i = 0; i < n; ++i)
	// {
	// 	for (ll i = 0; i < n; ++i)
	// 	{
	// 		arr[i]-=temp[i];
	// 	}
	// }
	return 0;
}