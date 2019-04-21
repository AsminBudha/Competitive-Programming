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

int t,n,k,u,v;
std::vector<int> tree[1001];
int parent[1001];
int c[1001];

int dfs(int pos){

	if(tree[pos].size()<=0){
		
		return 1;
	}
	
	std::vector<int> childs;
	// cout<<pos<<"{"<<endl;
	for(auto it:tree[pos]){
		if(it==parent[pos]){
			continue;
		}
		parent[it]=pos;
		int ans=dfs(it);
		// cout<<it<<"->"<<ans<<endl;
		childs.push_back(ans);
	}
	// cout<<"}";
	// cout<<endl;
	if(childs.size()<k){
		return c[pos];
	}
	sort(childs.begin(),childs.end());
	int s=0;
	for(int i=childs.size()-1;i>=0 && s<k;i--,s++){
		c[pos]+=childs[i];
	}
	return c[pos];
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		cout<<"Case "<<cs<<": ";

		cin>>n>>k;

		for(int i=0;i<=n;i++){
			tree[i].clear();
		}
		for (int i = 0; i < n-1; ++i)
		{
			cin>>u>>v;
			tree[u].push_back(v);
			tree[v].push_back(u);
		}
		fill(parent,parent+n+1,-1);
		fill(c,c+n+1,1);
		int ans=dfs(1);
		cout<<ans<<endl;
		
	}
	return 0;
}