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
	// freopen("../input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int l=0,r=n-1,ans=0;
	while(l<=r){
		if (l==r && arr[l]<=k)
		{
			ans++;
			l++;
			r--;
			break;
		}
		if (arr[l]<=k)
		{
			ans++;
			l++;
		}
		
		if (arr[r]<=k)
		{
			ans++;
			r--;
		}
		if (arr[l]>k && arr[r]>k)
		{
			break;
		}
	}
	
	cout<<ans;
	return 0;
}