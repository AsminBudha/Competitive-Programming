#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

typedef long long ll;

int main()
{
    freopen("../../input.txt","r",stdin);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    
    for (ll i = 0; i < n; ++i)
    {
        cin>>arr[i];
        
    }
    
    sort(arr,arr+n);
    // for (ll i = 0; i < n; ++i)
    // {
    // 	cout<<arr[i]<<" ";
    // }
    ll l=0,r=0;
    ll ans=0;
    while(l<n && r<n){

    	ll diff=arr[r]-arr[l];
    	// cout<<diff<<" "<<k<<endl;
    	if((diff)==k){
    		ans++;
    		l++;
    	}
    	else if(diff<k){
    		r++;
    	}
    	else l++;
    }
    cout<<ans;
    return 0;
}