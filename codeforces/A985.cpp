#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[n/2];
	for(int i=0;i<n/2;i++){
		cin>>arr[i];
			
	} 
	sort(arr,arr+(n/2));
	
	int b=0;
	int w=0;
	int ind=0;
	for(int i=1;i<=n;i+=2){
		
		b+=abs(arr[ind]-i);
		w+=abs(arr[ind]-(i+1));
		ind++;
	}
	cout<<(b<w?b:w);
	return 0;
}