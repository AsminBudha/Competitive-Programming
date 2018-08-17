#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	ll t;
	cin>>t;
	ll arr[t];
	for(ll i=0;i<t;i++) cin>>arr[i];
	sort(arr,arr+t);
	// reverse(arr,arr+t);
	for(ll i=0;i<t;i++) cout<<arr[i]<<"\n";
	return 0;
}