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
	ll q[4],p[4],b;
	ll m=MAX;
	for (int i = 0; i < 4; ++i)
	{
		cin>>q[i];
		m=q[i]>0?min(m,q[i]):m;
	}
	ll all=0;
	for (int i = 0; i < 4; ++i)
	{
		cin>>p[i];
		all+= q[i]>0?p[i]*m:0;
	}
	cin>>b;
	ll ans=0;
	while(b*m<all){
		ans+=b*m;
		ll sub=m;
		for (int i = 0; i < 4; ++i)
		{
			q[i]-=sub;
			// cout<<q[i]<<" ";
			m=q[i]>0?min(m,q[i]):m;
		}
		cout<<endl;
		all=0;
		for (int i = 0; i < 4; ++i)
		{
			all+= q[i]>0?p[i]*m:0;
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		// cout<<q[i]<<" ";
		ans+=(q[i]>0?q[i]:0)*p[i];
	}
	cout<<ans;
	return 0;
}