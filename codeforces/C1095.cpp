#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

	freopen("../input.txt","r",stdin);
	ll n,k;
	cin>>n>>k;
	ll ans[k];
	for(ll i=0;i<k;i++){
		ans[i]=0;
	}
	ll s=(ll)log2(n);
	if(s<k){
		cout<<"NO";
	}
	else{
		n=n^(1<<s);
		ans[s]=(ll)Math.pow(2,s);
		do{
			s=(ll)log2(n);

			n=n^(1<<s);
			ans[s]=(ll)Math.pow(2,s);
		}while(s!=0);
		sort(ans,ans+k);
		ll cur=-1,r=k-1;
		for(ll i=0;i<k;i++){
			if(ans[i]!=0){
				break;
			}
			cur++;
		}
		while(ans[0]==0){
			
		}
	}
	return 0;
}