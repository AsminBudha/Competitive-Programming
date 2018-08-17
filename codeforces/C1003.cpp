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
	int n,k;
	cin>>n>>k;
	ll cf[n+1];
	cf[0]=0;
	ll sum=0;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin>>x;
		sum+=x;
		cf[i]=sum;
	}
	double m=-100;
	for (int i = k; i <=n; ++i)
	{
		for (int j = i; j <=n; ++j)
		{
			double avg= (double)(cf[j]-cf[j-i])/i;
			// cout<<avg<<endl;
			m=max(avg,m);
		}
	}
	printf("%.10f\n",m );
	
	return 0;
}