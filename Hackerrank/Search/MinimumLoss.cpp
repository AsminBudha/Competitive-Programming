#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../../input.txt","r",stdin);

	
	ll n;
	cin>>n;
	ll arr[n];
	ll sarr[n];
	ll x;
	for (ll i = 0; i < n; ++i)
	{
		cin>>x;
		arr[i]=x;
		sarr[i]=x;
	}
	sort(sarr,sarr+n);
	ll min=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
	}
	return 0;
}