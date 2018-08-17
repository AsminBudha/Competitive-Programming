#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	ll n,k;
	cin>>n>>k;
	ll ans=0;
	ll x;
	while(n-->0){
		cin>>x;
		if(x%k==0) ans++;
	}
	cout<<ans;
	return 0;
}