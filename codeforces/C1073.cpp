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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	freopen("../input.txt","r",stdin);
	
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll x,y;
	cin>>x>>y;

	if(abs(x)+abs(y)>n){
		cout<<-1;
		return 0;
	}

	

	return 0;
}