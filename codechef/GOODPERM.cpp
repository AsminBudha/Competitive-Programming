#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll arr[a];
		for (ll i = 0; i < a; ++i)
		{
			cin>>arr[i];
		}
		int perm[a];
		for (int i = 1; i <= a; ++i)
		{
			perm[i-1]=i;
		}
		ll ans=0;
		do {
			bool possible=true;
    		for (int i = 0; i < a; ++i)
    		{
    			// cout<<perm[i]<<" ";
    			if (perm[i]!=arr[i] && arr[i]!=0)
    			{

    				possible=false;
    			}
    		}
    		if (!possible) continue;

    		int count=0;
			for (ll i = 1; i < a; ++i)
			{
				
				if(perm[i]>perm[i-1] ){
					count++;
				}
			}

				if (count==b)
				{
					ans++;
				}
  		} while ( std::next_permutation(perm,perm+a) );
		
		cout<<ans<<endl;
		
	}

	return 0;
}