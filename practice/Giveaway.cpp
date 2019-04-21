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

ll ans[]={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,47045881, 64000000,85766121};
ll n;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	unordered_map<ll,int> mp;
	for(ll i=0;i<21;i++){
		mp[ans[i]]++;
	}
	while(true){
		cin>>n;
		if(n==0) break;
		if(mp[n]){
			cout<<"Special\n";
		}
		else cout<<"Ordinary\n";
	}
	return 0;
}