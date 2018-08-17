#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll func(ll n){
	return (n*(n+1))/2;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	int t;
	cin>>t;
	ll x;
	while(t-->0){
		cin>>x;
		ll l=1,r=x;
		ll mid=0;
		ll fn=0;
		while(l<=r){
			mid=l+(r-l)/2;
			fn=func(mid);
			
			if (fn<=x)
			{
				l=mid+1;
			}
			else r=mid-1;
		}
		ll fnmin=fabs(x-func(l-1));
		ll fnmax=fabs(x-func(l));
		cout<<min(fnmax+l,fnmin+l-1)<<endl;
	}
	return 0;
}