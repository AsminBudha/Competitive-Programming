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

int t,n,m;
string s,e;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n>>m;
		
		ll ansh=0,ansm=0;
		for(int i=0;i<n;i++){
			cin>>s>>e;
			int sh=stoi(s.substr(0,2));
			int sm=stoi(s.substr(3,2));
			int eh=stoi(e.substr(0,2));
			int em=stoi(e.substr(3,2));
			// cout<<sh<<":"<<sm<<" "<<eh<<":"<<em<<" ";
			if(sm>0){
				sh++;
			}
			ansh+=eh-sh;
			
			ansm+=em;
			if(sm>0) ansm+=60-sm;
			// cout<<ansm<<" ";
		}
		// cout<<ansh<<" "<<ansm<<" ";
		ll ans=ansh+(ansm)/60;
		// cout<<ans;
		if(ans>=m){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}