#include <bits/stdc++.h>
#define MAX 1e9
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
const ll MOD = 1e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int t;
ll a,b,n;
vector<ll> mul(vector<ll> a,vector<ll> c){
	vector<ll> b;

	b.push_back(((a[0]*c[0])%MOD+(a[1]*c[2])%MOD)%MOD);
	b.push_back(((a[0]*c[1])%MOD+(a[1]*c[3])%MOD)%MOD);
	b.push_back(((a[2]*c[0])%MOD+(a[3]*c[2])%MOD)%MOD);
	b.push_back(((a[2]*c[1])%MOD+(a[3]*c[3])%MOD)%MOD);
	// cout<<11;
	return b;
}
int main()
{
	freopen("../input.txt","r",stdin);
	ll mx=(log(MAX)/log(2));

	std::vector<ll> v[mx+1];
	v[0].push_back(1);
	v[0].push_back(1);
	v[0].push_back(1);
	v[0].push_back(0);
	for(int i=1;i<mx+1;i++){
		v[i]=(mul(v[i-1],v[i-1]));
	}
	cin>>t;
	while(t--){
		cin>>a>>b>>n;
		if(n<2){
			cout<< ((n==0)?a:b )<<endl;
			continue;
		}
		ll x=n-1;
		ll range=log(x)/log(2);
		ll bit=1;
		vector< vector<ll> > used;
		for (int i = 0; i <=range; ++i)
		{
			/* code */
			if(x&(1<<i)){
				used.push_back(v[i]);
			}
		}
		// std::vector<ll> ans=used[0];
		for (int i = 1; i < used.size(); ++i)
		{
			used[0]=mul(used[0],used[i]);
		}
		ll res=((b*used[0][0])%MOD+(a*used[0][1])%MOD)%MOD;
		cout<<res<<endl;
	}
    
    return 0;
}
