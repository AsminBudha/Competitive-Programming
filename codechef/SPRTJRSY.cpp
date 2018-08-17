#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
ll mod= (1e9)+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../input.txt","r",stdin);
	
	ll n;
	cin>>n;
	ll x;
	while(n-->0){
		cin>>x;
		cout<<((x%mod)*(x%mod))<<endl;
	}
	return 0;
}	