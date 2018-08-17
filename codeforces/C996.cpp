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
	int n;
	cin>>n;
	int arr[2*n];
	for (int i = 0; i < 2*n; ++i)
	{
		cin>>arr[i];
	}
	int ans=0;
	for (int i = 0; i < 2*n; ++i)
	{
		int pos=-1;
		for (int j = i+1; j < 2*n; ++j)
		{
			if (arr[i]==arr[j])
			{
				pos=j;break;
			}
		}
		while(pos>i+1){
			swap(arr[pos],arr[pos-1]);
			ans++;pos--;
		}
	}
	// for (int i = 0; i < 2*n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	cout<<ans;
	return 0;
}