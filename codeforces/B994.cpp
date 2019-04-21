#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
	return p1.first<p2.first;
}
int main(){
	// freopen("../input.txt","r",stdin);
	ll n,k;
	cin>>n>>k;
	ll pow[n];
	ll coin[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>pow[i];
	}
	
	std::vector< pair<ll,ll> > v;
	
	for (ll i = 0; i < n; ++i)
	{
		
		ll x;
		cin>>x;
		
		v.push_back(make_pair(pow[i],x));
		
	}
	sort(v.begin(),v.end(),comp);
	std::vector<ll> collect;
	unordered_map<ll,ll> ans;
	for (ll it=0;it<n;it++)
	{
		ll x=v[it].second;
		ll sum=0;
		for (auto i=collect.begin();i!=collect.end(); ++i)
		{
			sum+= *i;
		}
		collect.push_back(x);
		ans[v[it].first]=sum+x;
		
		if (collect.size()>k)
		{
			sort(collect.begin(),collect.end());
		    collect.erase(collect.begin());
			
		}
		
	}
	for (ll i = 0; i < n; ++i)
	{
		cout<<ans[pow[i]]<<" ";
	}
	return 0;
}