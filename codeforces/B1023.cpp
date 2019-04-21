#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000007

int main(){
	// freopen("../input.txt","r",stdin);
	ll n,k;
	cin>>n>>k;
	ll y=(k-1)/2;
	ll x=k-n;
	x=(x<1)?1:x;
	ll ans=y-x+1;
	// cout<<x<<" "<<y<<endl;
	ans=max(0ll,ans);
	cout<<ans;
	return 0;
}