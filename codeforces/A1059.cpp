#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool comp(pair<ll,ll> p1, pair<ll,ll> p2){
	return p1.first<p2.first;
}
int main(){
	// freopen("../input.txt","r",stdin);
	ll n,l,a;
	cin>>n>>l>>a;
	ll ans=0;
	std::vector< pair<ll,ll> > v;
	ll x,y;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end(),comp);
	
	ll last=0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i].first-last>=a){
			ans+=(v[i].first-last)/a;
		}
		last=v[i].first+v[i].second;
	}
	ans+=(l-last)/a;
	cout<<ans;
	return 0;
}