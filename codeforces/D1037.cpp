#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	std::vector<int> graph[n+1];
	for (int i = 0; i < n-1; ++i)
	{
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
	}
	int tobe[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>tobe[i];
	}
	bool unvisited[n+1];
	fill(unvisited,unvisited+n+1,true);
	queue<int > q;
	q.push(1);
	unvisited[1]=false;
	if(tobe[0]!=1){
		cout<<"No";
		return 0;
	}
	int search=1;
	
	while(!q.empty()){
		
		int u=q.front();
		q.pop();
		map<int,int> vs;
		
		for (int i = 0; i < graph[u].size(); ++i)
		{
			if(unvisited[graph[u][i]]){
				vs[graph[u][i]]=1;
				unvisited[graph[u][i]]=false;
				
			}
			
		}
		while(vs[tobe[search]]){
			q.push(tobe[search]);
			
			std::map<int,int>::iterator it;
			it=vs.find(tobe[search]);
			vs.erase(it);
			
			search++;
			if(search>=n) break;
		}
		
		if(vs.size()>1){
			
			cout<<"No";
			return 0;
		}

	}
	cout<<"Yes";
	return 0;
}	