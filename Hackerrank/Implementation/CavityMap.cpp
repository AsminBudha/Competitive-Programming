#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);
	
	int n;
	cin>>n;
	string str[n];
	for(int i=0;i<n;i++) cin>>str[i];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (i!=0 && i!=n-1 && j!=0 && j!=n-1)
			{
				if (str[i-1][j]<str[i][j] && str[i][j+1]<str[i][j] 
					&& str[i+1][j]<str[i][j] && str[i][j-1]<str[i][j])
				{
					str[i][j]='X';
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<str[i]<<endl;
	}
	return 0;
}	