#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	// freopen("../input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll p1,p2,k;
		cin>>p1>>p2>>k;
		ll rem=(p1+p2)/k;
		if(rem%2==0){
			cout<<"CHEF";
		}
		else{
			cout<<"COOK";
		}
		cout<<endl;
	}
	return 0;
}