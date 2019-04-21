#include <bits/stdc++.h>
#define MAX 10000000
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
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	ll ans=MAX;
	for (ll i = 0; i < n; ++i)
	{
		ll count=0;
		ll l=i,r=i,num=arr[i];
		while(--l>=0){
			num-=k;
			count+=(num==arr[l]?0:1);
		}
		while(++r<n){
			num+=k;
			count+=(num==arr[r]?0:1);
		}
		ans=min(ans,count);
	}
	cout<<ans;
	return 0;
}