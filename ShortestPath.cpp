#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000000

void dijkstra(vector< pair<int,int> > graph[],int nodeLength,int edgeLength){
	int D[nodeLength+1];
	for(int i=0;i<=nodeLength;i++){
		D[i]=MAX;
	}
	D[1]=0;
	queues
	for(int i=1;i<=nodeLength;i++){
		cout<<i<<" "<<D[i]<<"->\n";
		for(auto it:graph[i]){
			cout<<it.first<<" "<<it.second<<endl;
		}

	}
}

int main(){
	freopen("input.txt","r",stdin);
	int nodeLength,edgeLength,u,v,w;
	cin>>nodeLength>>edgeLength;
	std::vector< pair<int,int> > graph[nodeLength+1];
	for(int i=0;i<edgeLength;i++){
		cin>>u>>v>>w;
		graph[u].push_back(make_pair(v,w));
		graph[v].push_back(make_pair(u,w));
	}
	dijkstra(graph,nodeLength,edgeLength);
	return 0;
}	