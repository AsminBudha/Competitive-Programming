#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	
	// freopen("../../input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n][n];
		ll col[n];
		ll row[n];
		fill(col,col+n,0);
		fill(row,row+n,0);
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>arr[i][j];
				col[j]+=arr[i][j];
				row[i]+=arr[i][j];
			}
		}
		bool possible=true;
		for (int i = 0; i < n; ++i)
		{
			bool check=false;
			for (int j = 0; j < n; ++j)
			{
				if (row[i]==col[j])
				{
					check=true;
					break;
				}
			}
			if (!check)
			{
				possible=false;
				break;
			}
		}
		cout<< (possible? "Possible\n" : "Impossible\n");

	}
	return 0;
}