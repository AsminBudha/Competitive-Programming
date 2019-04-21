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
bool comp(pii x,pii y){
	return x.first>y.first;
}
int main()
{
	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	std::vector<ll> v;
	
	ll x;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		v.push_back(x);
		
	}
	ll mx=-100000;
	int in=-1;
	for (int i = 0; i < n; ++i)
	{
		x=vc[i];
		x-=i;
		x/n
	}
	return 0;
}