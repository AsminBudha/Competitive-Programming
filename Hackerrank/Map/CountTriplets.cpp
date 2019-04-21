#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	freopen("../../input.txt","r",stdin);

	ll n,r,temp;
	cin>>n>>r;
	ll arr[n];
	map<ll,ll> mp;
	std::vector<ll> uniq;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
		if(mp[arr[i]]==1){
			uniq.push_back(arr[i]);
		}
	}
	sort(uniq.begin(),uniq.end());
	
	return 0;
}