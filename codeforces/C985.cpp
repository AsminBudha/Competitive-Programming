#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int n,k;
	ll l;
	cin>>n>>k>>l;
	int arr[n*k];
	for(int i=0;i<n*k;i++){
		cin>>arr[i];
	}
	sort(arr,arr+(n*k));
	if(arr[n-1]-arr[0]>l){
		cout<<0;
	}
	else{
		ll sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum+=arr[i];
		}
		cout<<sum;
	}
	return 0;
}