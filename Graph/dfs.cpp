#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void dfs(std::vector<int> graph[],bool *unvisited,int s){
	unvisited[s]=false;
	for(vector<int>::iterator i=graph[s].begin();i!=graph[i].end();i++){
		if(unvisited[*i]){
			dfs(graph,unvisited,*i);
		}
	}
}
int main(){

	int nodes,edges;
	cin>>nodes>>edges;
	std::vector<int> graph[nodes];
	while(edges-->0){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	bool unvisited[nodes];
	fill(unvisited.begin(),unvisited.end(),true);
	dfs(graph,unvisited,1);
}