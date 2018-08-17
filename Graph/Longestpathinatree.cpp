#include <bits/stdc++.h>
using namespace std;
long V;
std::vector<long> tree[10001];
long u,v;
bool unvisited[10001];
int dfs(int x,int count){
	unvisited[x]=false;
	
	for (std::vector<long>::iterator i=tree[x].begin(); i !=tree[x].end() ; i++)
	{
		if (unvisited[*i])
		{	

			count=dfs(*i,++count);
		}
	}
	return count;
}

int main(){
	//freopen("../input.txt","r",stdin);
	cin>>V;

	for(long i=0;i<V-1;i++){
		cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}

	memset(unvisited,true,V+1);
	int ans=0;
	int temp=0;
	for (int i = 1; i <= V; ++i)
	{
		temp=dfs(i,0);
		if(temp>ans) ans=temp;
		
	}
	cout<<ans;

	return 0;
}