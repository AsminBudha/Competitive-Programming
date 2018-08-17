#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	int t;
	cin>>t;
	
	while(t-->0){
		ll n;
		string str;
		cin>>n>>str;
		bool palin=true;
		for(ll i=0;i<n/2;i++){
			if(str[i]!=str[n-1-i]){
				palin=false;
				break;
			}
		}
		if (palin)
		{
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
	return 0;
}