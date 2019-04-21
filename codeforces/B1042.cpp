#include <bits/stdc++.h>
#define MAX 10000000
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

	// freopen("../input.txt","r",stdin);
	
	int n;
	cin>>n;
	map<string,ll> mp;
	ll x;
	string y;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		sort(y.begin(),y.end());
		if(!mp[y])
			mp[y]=x;
		else
			mp[y]=min(mp[y],x);
	}
	ll ans=mp["A"]+mp["B"]+mp["C"];
	if(!mp["A"] || !mp["B"] || !mp["C"]){
		ans=MAX;
	}
	// cout<<ans<<" ";
	if(mp["ABC"])
		ans=min(ans,mp["ABC"]);
	
	if(mp["A"] && mp["BC"])
		ans=min(ans,mp["A"]+mp["BC"]);

	if(mp["AB"] && mp["C"])
		ans=min(ans,mp["AB"]+mp["C"]);
	if(mp["B"] && mp["AC"])
		ans=min(ans,mp["B"]+mp["AC"]);

	if(mp["AB"] && mp["BC"])
		ans=min(ans,mp["AB"]+mp["BC"]);
	if(mp["AC"] && mp["BC"])
		ans=min(ans,mp["AC"]+mp["BC"]);
	if(mp["AB"] && mp["AC"])
		ans=min(ans,mp["AB"]+mp["AC"]);

	if(ans==MAX)
		cout<<-1;
	else
		cout<<ans;

	return 0;
}