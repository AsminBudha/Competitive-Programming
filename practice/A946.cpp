#include <bits/stdc++.h>

using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[n];
	int b=0;
	int c=0;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>0) b+=a;
		else c+=a;
	} 
	cout<<b-c;
	return 0;
}