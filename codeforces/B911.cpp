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
	int arr[n];
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	double target=4.5*n;
	if(sum>=target){
		cout<<0;
	}
	else{
		int count=0;
		sort(arr,arr+n);
		for (int i = 0; i < n; ++i)
		{
			if (arr[i]==5)
			{
				continue;
			}
			sum+=5-arr[i];
			count++;
			if (sum>=target)
			{
				break;
			}
		}
		cout<<count;
	}
	return 0;
}