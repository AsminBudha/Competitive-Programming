#include <iostream>
#include <stdio.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int T;
	// ll ans=641419708;
	// cout<<((ll)1e9+7);
	cin>>T;
	while(T-->0){
		int n,m;
		cin>>n>>m;
		int N=n+m-1;
		//cout<<N<<" ";
		ll ans=1;
		for(ll i=(N-n)+1;i<=N;i++) ans=(ans*i)%((ll)1e9+7);
		ll diff=1;
		for(ll i=1;i<=(N-(m-1));i++)diff=(diff*i)%((ll)1e9+7);
		//cout<<ans<<" "<<diff<<endl;
		ans/=diff;

		cout<<ans<<endl;

	}
	return 0;
}