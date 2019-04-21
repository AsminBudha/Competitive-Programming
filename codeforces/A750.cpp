#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int func(int n){
	return n*(n+1)/2;
}
int main(){
	// freopen("../input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	int req=4*60-k;
	int left=1;
	int right=n;
	
	while(left<=right){
		int mid=left+(right-left)/2;
		int time=5*func(mid);
		if(time<=req){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	cout<<right;
	return 0;
}