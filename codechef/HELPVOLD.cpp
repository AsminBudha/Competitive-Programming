#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);
	
	ll n;
	cin>>n;
	ll arr[n];
	ll v=10000,h=-1;
	ll vval=1000,hval=-1;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		// if(arr[i]<vval) v=i;vval=arr[i];
		// if(arr[i]>hval) h=i;hval=arr[i];
	} 
	// cout<<v<<h;
	ll ans=0;
	// if(h<v) swap(h,v);
	sort(arr,arr+n);
	for(ll i=0;i<n-1;i++) ans+=arr[i]*arr[i+1];
	
	cout<<ans;
	return 0;
}	