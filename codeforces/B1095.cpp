#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

	// freopen("../input.txt","r",stdin);
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);

	if(n>2){
		cout<<min(arr[n-2]-arr[0],arr[n-1]-arr[1]);
	}
	else
		cout<<arr[n-2]-arr[0];
	return 0;
}