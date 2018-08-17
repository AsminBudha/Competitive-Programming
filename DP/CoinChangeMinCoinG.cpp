#include<iostream>
using namespace std;

int coinChangeMinCoin(int v[],int n,int s){
	int min[s+1];
	for(int i=1;i<=s;i++){
		min[i]=10e5;
	}
	// cout<<min[0];
	for(int i=0;i<=s;i++){
		for(int j=0;j<n;j++){
			if(i+v[j]<=s && min[i]+1<min[i+v[j]])
				min[i+v[j]]=min[i]+1;
		}
	}
	return min[s];
}
// int main(){
// 	int v[]={1,3,5};
// 	int n=3;
// 	int s=11;
// 	cout<<coinChangeMinCoin(v,n,s);
// 	return 0;
// }
//https://paste.ubuntu.com/26369997/