#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
		a= (a<0)?((n%2==0)?-a:a):a;
		b= (b<0)?((n%2==0)?-b:b):b;
		cout<< ((a==b)?0:((a<b)?2:1));
		cout<<endl;
	}

	return 0;
}