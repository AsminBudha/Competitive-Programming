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
int p[1001];
bool unvisited[1001];


int dfs(int u){
	if(!unvisited[u]){
		return u;
	}
	unvisited[u]=false;
	return dfs(p[u]);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}

	for(int i=1;i<=n;i++){
		fill(unvisited,unvisited+1+n,true);
		cout<<dfs(i)<<" ";
	}
	return 0;
}