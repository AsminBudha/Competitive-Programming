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

int main()
{
	// freopen("../input.txt","r",stdin);
	ll h,c,q;
	cin>>h>>c>>q;
	ll height[h+2];
	fill(height,height+h+2,0);
	ll hi,si,ei;
	for (ll i = 0; i < c; ++i)
	{
		cin>>hi>>si>>ei;
		height[si]=max(height[si],hi);
		height[ei+1]=min(height[ei],-hi);
	}
	
	for (ll i = 1; i <= h; ++i)
	{
		height[i]+=height[i-1];
		// cout<<height[i]<<" ";
	}
	
	ll x,y;
	for (ll i = 0; i < q; ++i)
	{
		cin>>x>>y;
		if (x>height[y])
		{
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	
	return 0;
}