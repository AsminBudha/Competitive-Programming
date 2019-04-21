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

int t,n,q;
ll a[100007];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n>>q;
		map<ll,ll> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0)
				mp[a[i]]++;
		}
		ll x=0,y=0,z=0;
		while(q--){
			cin>>x;
			if(x==1){
				cin>>y>>z;
				y--;
				if(a[y]>0)
					mp[a[y]]--;
				
				if(z>0)
					mp[z]++;

				if(mp[a[y]]==0) mp.erase(a[y]);
				
				a[y]=z;
			}
			else{
				cout<<mp.size()<<endl;
			}
		}
	}
	return 0;
}