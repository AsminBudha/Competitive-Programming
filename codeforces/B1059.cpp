#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	// freopen("../input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	string g[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>g[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int x=i,y=j;
			if(x+1<n && x-1>=0 && y+1<m && y-1>=0){
			// if(g[i][j]=='#'){
				x--;y--;
				// cout<<x+3<<" "<<y+3<<endl;
				// if((x+2)<n && (y+2)<m){

					for(;x<i+3 && x<n;x++){
						y=j-1;
						for(;y<j+3 && y<m;y++){
							// cout<<x<<"->"<<y<<" ";
							if(x==i && y==j)
								continue;
							g[x][y]='.';
						}
						// cout<<endl;
					}	
				// }
				
				// i=x-1;
				// j=y-1;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			// cout<<g[i][j]<<" ";
			if(g[i][j]=='#'){
				cout<<"NO";
				return 0;
			}
		}
		// cout<<endl;
	}
	cout<<"YES";
	return 0;
}