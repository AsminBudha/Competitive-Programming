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

map<int,int> len;
map<int,int> pos;
int p=0;

std::vector<int> a;
// std::vector<int> ans[200003];
bool unvisited[200003];
std::vector<int> v[200003];

void dfs(int u){
	a.push_back(u);
	pos[u]=p;
	
	p++;
	
	for(auto it:v[u]){
		if(unvisited[it]){
			
			unvisited[it]=false;
			dfs(it);
			len[u]+=len[it];
		}
		
	}
	len[u]++;
}
int main()
{
	// freopen("../input.txt","r",stdin);
	int n,q;
	cin>>n>>q;
	
	for (int i = 2; i <=n; ++i)
	{
		int x;
		cin>>x;
		v[x].push_back(i);
	}
	fill(unvisited,unvisited+n+1,true);
	
	unvisited[1]=false;
	
	dfs(1);

	// for(auto it:a){
	// 	cout<<it<<"-"<<pos[it]<<"->"<<len[it]<<" ";
	// }
	// cout<<endl;
	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<i<<"->";
	// 	for(auto it:ans[i]){
	// 		cout<<it<<" ";
	// 	}
	// 	cout<<endl;
	// }
	while(q--){
		int x,y;
		cin>>x>>y;
		int res=-1;
		int px=pos[x];
		// cout<<px<<" ";
		if(len[x]>=y){
			res=a[px+y-1];
		}
		
		
		cout<<res<<endl;
	}
	return 0;
}