#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("../input.txt","r",stdin);
	ll n,m,a;
	cin>>n>>m>>a;
	ll ans= ceil((double)n/a)*ceil((double)m/a);
	cout<<ans;
	return 0;
}