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
	// freopen("../input.txt","r",stdin);
	cin>>n;
	ll m=10e9,p=-1;
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
		ll l=0,r=arr[i];
		while(l<=r){
			ll mid=l+(r-l)/2;
			ll val=i+mid*n;
			if(val>=arr[i]){
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		temp[i]=i+l*n;
	}
	for (ll i = 0; i < n; ++i)
	{
		// cout<<temp[i]<<" ";
		if(temp[i]<m){
			m=temp[i];
			p=i+1;
		}
	}
	cout<<p;
	return 0;
}