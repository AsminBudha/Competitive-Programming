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
map<long, long> cycle;
vector<long> vect(10001);

int main()
{
	// freopen("../input.txt","r",stdin);
	int n,m,k;
	cin>>n>>k>>m;
	std::vector< pair<int,int> > v[n+1];
	for (int i = 0; i < m; ++i)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v[x].push_back(make_pair(y,z));
		v[y].push_back(make_pair(x,z));
	}
	
	int dist[n+1];
	fill(dist,dist+n+1,MAX);
	dist[1]=0;
	priority_queue< pii, vector <pii> , greater<pii> > pq;
	pq.push(make_pair(0,1));
	while(!pq.empty()){
		int u=pq.top().second;
		pq.pop();
		// cout<<u<<" "<<dist[u]<<endl;
		for (auto it:v[u])
		{
			
			int sum=dist[u]+it.second;
			if((dist[u]/k)%2==1) sum+=k-dist[u]%k;
			if(sum<dist[it.first]){
				dist[it.first]=sum;
				pq.push(make_pair(sum,it.first));
				
			}
		}
	}
	
	cout<<dist[n];
	return 0;
}