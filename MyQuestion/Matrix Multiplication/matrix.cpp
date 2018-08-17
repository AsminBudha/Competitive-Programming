#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("input/input05.txt","r",stdin);
	freopen("output/output05.txt","w",stdout);
	int m,n,x,y;
	cin>>m>>n>>x>>y;
	int mat1[m][n];
	int mat2[x][y];
	ll ans[m][y];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>mat1[i][j];
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>mat2[i][j];
		}
	}
	if (n!=x)
	{
		cout<<-1;
		return 0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ll c=0;
			for(int k=0;k<y;k++){
				c+=((ll)mat1[i][k]*mat2[k][j]);
			}
			ans[i][j]=c;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}