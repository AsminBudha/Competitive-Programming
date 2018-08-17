#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	//freopen("input.txt","r",stdin);
	
	long n,k;
	cin>>n>>k;
	long count=0;
	long x;
	while(n-->0){
		cin>>x;
		x=5-x;
		if(x>=k) count++;
	}
	cout<<count/3;
	
	return 0;
}
