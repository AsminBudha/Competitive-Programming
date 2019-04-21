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
	freopen("../input.txt","r",stdin);
	int n,w;
	cin>>n>>w;
	int in=0,pos=-1;
	int sum=0;
	while(n--){
		int x,y;
		cin>>x>>y;
		in++;
		// cout<<x<<" "<<y<<endl;
		if (x==1)
		{
			pos= (sum==0)?in:pos;
			sum+=y;
			// cout<<sum<<" ";
			if (sum>=w)
			{
				break;
			}
		}
		else{
			
			sum=0;
		}
	}
	if (sum<w)
	{
		cout<<-1;
		return 0;
	}
	cout<<pos;
	return 0;
}