#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::vector<int> v[n+1];
	for(int i=2;i<=n;i++){
		int u;
		cin>>u;
		v[u].push_back(i);
	}

	bool unvisited[n+1];
	//fill_n(unvisited,n,0);
	unvisited[1]=0;
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int cleaf=0;
		for(vector<int>::iterator it=v[u].begin();it!=v[u].end();it++){
			unvisited[*it]=0;
			if(v[*it].size()==0) cleaf++;
			else q.push(*it);
			
		}
		if(cleaf<3){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}