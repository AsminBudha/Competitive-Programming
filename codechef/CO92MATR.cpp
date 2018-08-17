#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../input.txt","r",stdin);
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,m;
		cin>>n>>m;
		ll arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}

		bool isAcceptable=true;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (arr[i][j]==-1)
				{
					ll maxval=0;
					maxval=(j-1)>=0?max(maxval,arr[i][j-1]):maxval;
					maxval=(i-1)>=0?max(maxval,arr[i-1][j]):maxval;
					arr[i][j]=maxval+1;
				}
				else{
					isAcceptable=((j-1)>=0?(arr[i][j-1]<=arr[i][j]):isAcceptable);
					isAcceptable=((i-1)>=0?(arr[i-1][j]<=arr[i][j]):isAcceptable);
				}
				if (!isAcceptable)
				{
					break;
				}
			}
			if (!isAcceptable)
			{
				break;
			}
		}

		if (!isAcceptable)
		{
			cout<<"-1\n";
		}
		else{
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					cout<<arr[i][j]<<" ";
				}
				cout<<"\n";
			}
		}

	}
	return 0;
}