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

int T;
ll n;
ll dp[1e18+1][1e18+1];
ll cnt[1e18+1][1e18+1];
pll traverse(ll i, ll j){
	if(j<=-1){
		return {0,0};
	}
	if(j>i){
		cnt[i][j]=0;
		dp[i][j]=0;
		return {0,0};
	}
	if(i==0 && j==0){
		cnt[i][j]=0;
		dp[i][j]=1;
		return {1,0};
	}
	pll x=traverse(i-1,j-1),y=traverse(i-1,j);
	dp[i][j]=x.first+y.first;
	return dp[i,j]=x+y;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	freopen("../input.txt","r",stdin);
	traverse(1e18,1e18);
	cin>>T;
	while(T--){
		cin>>n;

		cout<<"\n";
	}
	return 0;
}

