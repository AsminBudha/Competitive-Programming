#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxQ=0,maxT=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int tempQ=0,tempT=0;
			for(int k=0;k<m;k++){
				if(arr[i][k]=='1' || arr[j][k]=='1') tempQ++;
			}
			if(tempQ>maxQ){
				maxQ=tempQ;
				maxT=1;
			}
			else if(tempQ==maxQ) maxT++;
		}
	}
	cout<<maxQ<<endl<<maxT;
	return 0;
}