#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll dist[3001];
bool unvisited[3001];
int minDist(int V){
	int minIn=-1;
	ll minVal=INT_MAX;
	
	for (int i = 1; i < V; ++i)
	{
		 // cout<<unvisited[i]<<" ";
		if (unvisited[i] && dist[i]<minVal)
		{
			minVal=dist[i];
			minIn=i;
			// cout<<minIn<<" ";
		}
	}
	
	return minIn;
}
void dijkstra(std::vector< pair<ll,ll> > g[], int V, int S){
	memset(unvisited,true,V);

	for (int i = 1; i < V; ++i)
	{
		dist[i]=INT_MAX-1;
	}
	
	dist[S]=0;
	for (int i = 0; i < V-1; ++i)
	{
		int u=minDist(V);
		unvisited[u]=false;
		// cout<<u<<" \n";
		for (std::vector< pair<ll,ll> >::iterator it=g[u].begin();it!=g[u].end(); ++it)
		{
			if (unvisited[it->first] && (dist[u]+(it->second))<dist[it->first])
			{
				// cout<<u<<"->"<<(it->first)<<"="<<dist[u]+(it->second)<<"\n";
				dist[it->first]=dist[u]+(it->second);
			}
		}
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../../input.txt","r",stdin);

	int t;
	cin>>t;
	
	while(t-->0){
		int V,E;
		cin>>V>>E;
		ll x,y,r;
		std::vector< pair<ll,ll> > g[V+1];
		for (int i = 0; i < E; ++i)
		{
			cin>>x>>y>>r;
			g[x].push_back(make_pair(y,r));
			g[y].push_back(make_pair(x,r));
		}
		int s;
		cin>>s;
		dijkstra(g,V+1,s);
		for (int i = 1; i <= V; ++i)
		{
			if(i==s) continue;
			cout<<(dist[i]==INT_MAX-1?-1:dist[i])<<" ";
		}
		cout<<endl;
		// queue<int> q;
		// q.push(s);
		// memset(unvisited,true,V+1);
		// while(!q.empty()){
		// 	int u=q.front();
		// 	q.pop();
		// 	unvisited[u]=false;
		// 	if (u!=s)
		// 	{
		// 		cout<<dist[u]<<"-> "<<u<<endl;
		// 	}
		// 	for (std::vector< pair<ll,ll> >::iterator it = g[u].begin(); it!=g[u].end(); ++it)
		// 	{
		// 		if (unvisited[it->first])
		// 		{
		// 			q.push(it->first);
		// 			unvisited[it->first]=false;
		// 		}	
		// 	}
		// }
		
	}
	return 0;
}