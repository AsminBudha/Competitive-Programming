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
	std::map<string, int> mp;
	string s;
	string a1[n];
	string a2[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		mp[s]++;
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		mp[s]--;
	}
	int ans=0;
	
	std::vector<string> v1;
	std::vector<string> v2;
	for (auto i=mp.begin();i!=mp.end(); ++i)
	{
		if (i->second!=0)
		{
			ans+=abs(i->second);
		}
	}
	// sort(v1.begin(),v1.end());
	// sort(v2.begin(),v2.end());
	// for (int i = 0; i < v1.size(); ++i)
	// {
	// 	if (v1[i]!=v2[i])
	// 	{
	// 		for (int j = 0; j < v1[i].size(); ++j)
	// 		{
	// 			if(v1[i][j]!=v2[i][j]) ans++;
	// 		}
	// 	}
	// }

	cout<<ans/2;
	
	return 0;
}