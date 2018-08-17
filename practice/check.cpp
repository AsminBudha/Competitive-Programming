#include <iostream>
using namespace std;
void dfs(int u,vector<int> &adj,bool visited[],int &node)
{

	node++;

	visited[u]=true;

	vector<int>::iterator i;

	for(i=adj[u].begin();i!=adj[u].end();i++){ 
		if(!visited[*i]) dfs(*i,adj,visited,node);
	}

}

int main()
{
	

	return 0;
}