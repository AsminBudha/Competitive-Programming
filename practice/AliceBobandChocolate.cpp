#include <iostream>
#include <cmath>
typedef long long int lli;
using namespace std;
int main(){
	long n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1){
		cout<<"1 0";
		return 0;
	}
	long start=0,end=n-1;
	long alice=1;
	long bob=1;
	lli alicesum=arr[start];
	lli bobsum=arr[end];
	while(start+1<end){
		if(alicesum<=bobsum){
			alicesum+=arr[++start];
			alice++;
		}
		else{
			bobsum+=arr[--end];
			bob++;
		}
		
	}
	cout<<alice<<" "<<bob;
	return 0;
}