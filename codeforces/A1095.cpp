#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

	// freopen("../input.txt","r",stdin);
	ll n;
	cin>>n;
	string s;
	cin>>s;
	string ans="";
	ll increase=1;
	for(ll i=0;i<n;i+=increase){
		ans+=s[i];
		increase++;
		// cout<<i<<" ";
	}
	cout<<ans;
	return 0;
}