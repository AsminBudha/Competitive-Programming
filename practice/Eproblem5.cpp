#include <iostream>
#include <queue>
using namespace std;

int main(){
	
	long t;
	cin>>t;
	while(t-->0){
		int n,m;
		cin>>n>>m;
		int arr[n+1][m+1];
		bool unvisited[n+1][m+1];
		cout<<unvisited[n][m];
		arr[n][m]=1;
		queue<int> row;
		queue<int> col;
		row.push(n);
		col.push(m);
		while(!row.empty() && !col.empty()){
			int i=row.front();
			int j=col.front();
			//cout<<i<<" "<<j<<endl;
			row.pop();
			col.pop();
			if(i-1>=0){
			    row.push(i-1);
			    col.push(j);
				arr[i-1][j]+=arr[i][j];
			}
			if(j-1>=0){
			    row.push(i);
			    col.push(j-1);
				arr[i][j-1]+=arr[i][j];
			}
		}
		//cout<<arr[0][0]<<endl;

	}
	return 0;
}