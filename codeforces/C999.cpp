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
int n,k;
string str;

int main()
{
	// freopen("../input.txt","r",stdin);
	cin>>n>>k>>str;
	char c='a';
	std::vector<int> v[26];
	for (int i = 0; i < n; ++i)
	{
		v[str[i]-'a'].push_back(i);
	}
	std::vector<int> pos;
	for (int i = 0; i < 26; ++i)
	{
		for (auto it:v[i])
		{
			pos.push_back(it);
			// cout<<it<<" ";
			k--;
			if (k<=0)
			{
				break;
			}
		}
		if (!k)
		{
			break;
		}
	}
	// cout<<endl<<pos.size();
	sort(pos.begin(),pos.end());
	int p=0;
	for (int i = 0; i < n; ++i)
	{
		if (p<pos.size() && i==pos[p])
		{
			// cout<<pos[p]<<" ";
			p++;
			continue;
		}
		cout<<str[i];
	}
	return 0;
}