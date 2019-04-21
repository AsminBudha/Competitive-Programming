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

ll n,k,arr[(ll)1e5+7];

ll gcd(ll a,ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

ll gcd(vector<ll> v){
	ll g=0;
	for(ll i=0;i<v.size();i++){
		g=gcd(g,v[i]);
		// cout<<g<<" ";
	}
	return g;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	cin>>n>>k;
	map<ll,int> m;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		arr[i]=arr[i]%k;
		m[arr[i]]++;
	}

	map<ll,int> ans;
	std::vector<ll> v;
	for(auto it:m){
		ll x=it.first;
		ans[x]++;
		if(x!=0){
			v.push_back(x);

		}
	}
	if(v.size()>0){
		ll g=gcd(v);
		// cout<<g<<" ";
		for(ll i=1;i<=k;i++){
			ans[(i*g)%k]++;
		}
		
	}
	cout<<ans.size()<<endl;
	for(auto it:ans){
		cout<<it.first<<" ";
	}
	
	return 0;
}