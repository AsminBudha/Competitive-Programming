#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 100007


int main(){
	// freopen("../input.txt","r",stdin);
	
	ll n;
	cin>>n;
	ll total=(n*(n+1))/2;
	for(ll i=2;i<=n;i++){
		if((total-i)%i==0){
			cout<<"Yes\n"<<1<<" "<<i<<endl<<n-1;
			for(ll j=1;j<=n;j++){
				if(i==j) continue;
				cout<<" "<<j;

			}
			return 0;
		}
	}
	cout<<"No";
	return 0;
}	