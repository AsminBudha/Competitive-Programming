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

int n,ax,ay,bx,by,cx,cy;
bool unvisited[1001][1001];
int x[8]={0,1,1, 1, 0,-1,-1,-1};
int y[8]={1,1,0,-1,-1,-1, 0, 1};

bool ok(int i,int j){
	// cout<<i<<" "<<j<<" "<<n<<endl;
	if( i>0 && i<=n && j>0 && j<=n ) 
		return true;
	return false;
}

bool dfs(int u,int v){
	if(cx==u && cy==v){
		return true;
	}
	unvisited[u][v]=false;
	if(u==ax || v==ay) return false;
	if(abs(ax-u)==abs(ay-v)) return false;

	for(int it=0; it<8 ; it++){
		// y[it];
		if(!ok( u+x[it] , v+y[it]) || !unvisited[u+x[it]][v+y[it]]) 
			continue;
		if(dfs( u+x[it] , v+y[it])) 
			return true;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>n;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	for(int i=1;i<=n;i++){
		fill(unvisited[i],unvisited[i]+n+1,true);
	}
	if(dfs(bx,by))
		cout<<"YES";
	else cout<<"NO";
	// cout<< (dfs)?"YES":"NO";
	return 0;
}