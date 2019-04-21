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

int t,n,a[100007];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n;
		map<int,ll> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		ll ans=0,last=0,lastelem=0;
		map<int,ll>::iterator it=mp.begin();
		ans=(*it).second;
		last=ans;
		lastelem=(*it).first;
		it++;
		for(;it!=mp.end();it++){
			if(last+(*it).second>ans && abs(lastelem-(*it).first)<=1 ){
				ans=last+(*it).second;
			}
			else if((*it).second>ans){
				ans=(*it).second;
			}
			last=(*it).second;
			lastelem=(*it).first;
		}
		cout<<ans<<endl;
	}
	return 0;
}