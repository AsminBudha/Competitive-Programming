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

int n;
ll a[100007];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>n;
	
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	ll mx=-10000007;
	for(int i=1;i<=n;i++){
		ll m=0,inc=1,pos=i;
		ll sum=0;
		// cout<<i<<"->";
		while((pos+inc-1)<=n){
			sum+=a[pos+inc-1]-a[pos-1];
			pos+=inc;
			inc++;
		}
		// cout<<sum<<" ";
		mx=max(mx,sum);
	}
	cout<<mx;
	return 0;
}