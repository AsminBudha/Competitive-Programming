#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll count( ll S[], ll m, ll n )
{
    ll i, j, maxx, maxy;
 
    // We need n+1 rows as the table is constructed 
    // in bottom up manner using the base case 0
    // value case (n = 0)
    // ll table[n+1][m];
    ll maxtable[n+1][m];
    cout<<maxtable[n][m-1]<<endl;
    for (i = 0; i <= n; ++i)
    {
    	memset(maxtable[i],0,m);
    }
    cout<<maxtable[0][0]<<endl;
    // Fill the enteries for 0 value case (n = 0)
    for (i=0; i<m; i++){
    	// table[0][i] = 1;
    	maxtable[0][i]=1;

    }
        
 	// ll min=10000,max=0;
    // Fill rest of the table entries in bottom 
    // up manner  
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            // Count of solutions including S[j]
            // x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
 			maxx=(i-S[j] >= 0)? maxtable[i - S[j]][j]: 0;

            // Count of solutions excluding S[j]
            // y = (j >= 1)? table[i][j-1]: 0;
 			maxy=(j >= 1)? maxtable[i][j-1]: 0;
            // total count
            // table[i][j] = x + y;
            maxtable[i][j]=maxx+maxy;
        }
    }
    return maxtable[n][m-1];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../input.txt","r",stdin);
	
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	cout<<n<<k;
	for(ll i=0;i<n;i++) cin>>arr[i];
	cout<<count(arr,n,k);
    // printf("%d ", count(arr, n, k));
    
    return 0;
}	