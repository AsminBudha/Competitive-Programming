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

int t,n,m,k;
string g[100];
bool unvisited[100][100];
bool val[100][100];
pair<int,int> s,d;

int step[]={-1,1};

int dfs(pair<int,int> cur,int wand){
	if(g[cur.first][cur.second]=='*'){
		return wand;
	}

}
int main()
{
	freopen("../../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>m;
		size_t sp,dp;
		for (int i = 0; i < n; ++i)
		{
			cin>>g[i];
			sp=g[i].find('*');
			if(sp!=string::npos)
				d={i,sp};
			dp=g[i].find('M');
			if(dp!=string::npos)
				s={i,dp};
		}
		for (int i = 0; i < n; ++i)
		{
			fill(unvisited[i],unvisited[i]+m,true);
			fill(val[i],val[i]+m,0);
		}
		queue< pair<int,int> > q;
		q.push(s);
		unvisited[s.first][s.second]=false;
		while(!q.empty()){
			pii u=q.front();
			q.pop();
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					int x=u.first+step[i],y=u.second+step[j];
					if(g[x][y]=='X')
						continue;

				}
			}
		}
		int ans=dfs(s,0);
	}
	return 0;
}