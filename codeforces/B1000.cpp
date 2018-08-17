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

int main()
{
	freopen("../input.txt","r",stdin);
	ll n,m;
	cin>>n>>m;
	std::vector<ll> v;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	v.push_back(M);
	bool lightOn=true;
	
	ll diff=-100;
	int pos=-1;
	for (int i = 0; i < n; ++i)
	{
		if (lightOn)
		{
			ans+=arr[i+1]-arr[i];
		}
		else{
			ll temp=arr[i+1]-arr[i];
			if (temp>diff)
			{
				diff=temp;
				pos=i;
			}
			
		}
		
		lightOn=!lightOn;
	}
	ans+=(diff<=1)?0:
	return 0;
}