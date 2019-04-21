#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	ll n,s;
	cin>>n>>s;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	ll mid=n/2;

	if(arr[mid]==s) cout<<0;
	else if(arr[mid]<s){
		ll ans=0;
		ans+=s-arr[mid];
		arr[mid]+=ans;
		for(ll i=mid+1;i<n;i++){
			if(arr[i]>=arr[i-1]) break;
			
			ans+=arr[i-1]-arr[i];
			arr[i]+=(arr[i-1]-arr[i]);
		}
		cout<<ans;
	}
	else{
		ll ans=0;
		ans+=arr[mid]-s;
		arr[mid]=s;
		for(ll i=mid-1;i>=0;i--){
			if(arr[i]<=arr[i+1]) break;
			// cout<<arr[i]<<" "<<arr[i+1]<<endl;
			ans+=arr[i]-arr[i+1];
			arr[i]-=(arr[i]-arr[i+1]);
		}
		cout<<ans;
	}
	return 0;
}	