#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	
	ll n,l;
	cin>>n>>l;
	ll arr[n];
	for(ll i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	double diff=0;
	ll start=0;
	for (ll i = 0; i < n; ++i)
	{
		if (i==0 && arr[i]!=0)
		{
			diff=arr[i];
			start=arr[i];
		}
		else{
			double mid=start+((double)arr[i]-start)/2;
			diff=max(diff,max(fabs(start-mid),fabs(arr[i]-mid)));
			start=arr[i];
		}
		
	}
	if (arr[n-1]!=l)
	{
		diff=max(diff,fabs(start-l));
	}
	printf("%.9f\n",diff );
	return 0;
}