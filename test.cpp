#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int isPrime(int n){
	if(n<=1){
		return 0;
	}

	if( n==2 || n==3){
		return 1;
	}

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}

   return 1;
}

int isTwin(int a[],int n){
	for(int i=0;i<n;i++){
		int prime=isPrime(a[i]);
		
		if(prime && isPrime(a[i]+2)){
			bool found=false;
			for(int j=0;j<n;j++){
				if(a[j]==a[i]+2){
					found=true;
				}
			}
			if(!found){
				cout<<a[i]+2<<"1";
				return 0;
			}
		}
		
		if(prime && isPrime(a[i]-2)){
			bool found=false;
			for(int j=0;j<n;j++){
				if(a[j]==a[i]-2){
					found=true;
				}
			}

			if(!found){
				cout<<a[i]<<"2";
				return 0;
			}
		}
	}
	return 1;
}

int main() {
   freopen("input.txt","r",stdin);
   int a[]={3,5,8,10,27};
   

   cout<<isTwin(a, 5);

	// int a[]={1,-20,8,5,-20,6};
 //   cout<<isSmallest(a, 6);

	// int a[]={1,2,3,4,6};
 //   cout<<isSmallest(a, 5);

	// int a[]={7,1,2,1,7,4,2,7};
 //   cout<<isSmallest(a, 8);

   return 0;	
} 