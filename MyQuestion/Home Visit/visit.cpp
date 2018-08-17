#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("input/input05.txt","r",stdin);
	freopen("output/output05.txt","w",stdout);
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(ll i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}