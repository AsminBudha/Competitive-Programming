#include<iostream>
using namespace std;

int coinChangeMinCoin(int v[],int n,int s){
	int min[s+1];
	for(int i=1;i<=s;i++){
		min[i]=10e5;
	}
	for(int i=0;i<=s;i++){
		for(int j=0;j<n;j++){
			if(v[j]<=i && min[i-v[j]]+1<min[i])
				min[i]=min[i-v[j]]+1;
		}
	}
	return min[s];
}
int main(){
	// int v[]={1,3,5};
	// int n=3;
	// int s=11;
	// cout<<coinChangeMinCoin(v,n,s);
	cout<<"hello world";
	return 0;
}