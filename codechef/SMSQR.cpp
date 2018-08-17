#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
ll mod= (1e9)+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);
	
	ll n;
	cin>>n;
	ll x,y;
	while(n-->0){
		cin>>x>>y;
		ll up=(y*y)-((y-1)*(y-1));
		ll down=((x+1)*(x+1))-(x*x);
		up=(up+1)/2;
		down=((down+1)/2)-1;

		ll ans=(((up*(4*(up*up)-1))/3)%mod)-(((down*(4*(down*down)-1))/3)%mod);
		// cout<<((up*(4*(up*up)-1))/3)<<endl;
		// cout<<down<<" "<<((down*(4*(down*down)-1))/3)<<endl;
		ans=ans%mod;
		if(ans<0) ans+=mod;
		cout<<ans<<endl;
	}
	return 0;
}	