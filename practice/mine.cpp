#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n,m;
bool check(int i,int j){
	if(i<0 || j<0) return false;
	if(i>=n || j>=m) return false;

	return true;
}

int main(){
	// freopen("../input.txt","r",stdin);
	
	int c=1;
	while(cin>>n>>m){
		if (n==0 || m==0)
		{
			break;
		}
		int arr[n][m];
		for (int i = 0; i < n; ++i)
		{
			fill(arr[i],arr[i]+m,0);
		}
		string input;
		for (int i = 0; i < n; ++i)
		{
			cin>>input;
			for (int j = 0; j < m; ++j)
			{
				if (input[j]=='*')
				{
					arr[i][j]=-1;
					if(check(i-1,j) && arr[i-1][j]!=-1) arr[i-1][j]++;
					if(check(i-1,j+1) && arr[i-1][j+1]!=-1) arr[i-1][j+1]++;
					if(check(i,j+1) && arr[i][j+1]!=-1) arr[i][j+1]++;
					if(check(i+1,j+1) && arr[i+1][j+1]!=-1) arr[i+1][j+1]++;
					if(check(i+1,j) && arr[i+1][j]!=-1) arr[i+1][j]++;
					if(check(i+1,j-1) && arr[i+1][j-1]!=-1) arr[i+1][j-1]++;
					if(check(i,j-1) && arr[i][j-1]!=-1) arr[i][j-1]++;
					if(check(i-1,j-1) && arr[i-1][j-1]!=-1) arr[i-1][j-1]++;
				}
			}
		}
		if(c!=1)
		cout<<"\n";
		cout<<"Field #"<<c++<<":\n";
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (arr[i][j]==-1)
				{
					cout<<"*";
				}
				else cout<<arr[i][j];
			}
			cout<<"\n";
		}


	}
	return 0;
}