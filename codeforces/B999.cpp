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
string str;
std::set<int> v;
int main()
{
	// freopen("../input.txt","r",stdin);
	cin>>n>>str;
	for (int i = 1; i*i <= n; ++i)
	{
		if (n%i==0)
		{
			v.insert(i);
			v.insert(n/i);
		}
	}
	for(auto it:v){
		int l=0,r=it-1;
		while(l<r){
			swap(str[l],str[r]);
			l++;r--;
		}
	}
	cout<<str;
	return 0;
}