#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);
	
	int t;
	cin>>t;
	string str;
	while(t-->0){
		cin>>str;
		if(str.size()>10){
			cout<<str[0]<<str.size()-2<<str[str.size()-1]<<"\n";
		}
		else cout<<str<<"\n";
	}
	return 0;
}