#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
typedef long long ll;

ll minuteToWinIt(vector<ll> a, ll k) {
    ll size=a.size();
    unordered_map<ll,ll> mp;
    for (ll i = 0; i < size; ++i)
    {
        ll res=a[i]-i*k;
        mp[res]++;
    }
    ll mx=-100;
    for(auto it=mp.begin();it!=mp.end();it++){
        mx=max(mx,(it->second));
    }
    return size-mx;
}
int main()
{
	// freopen("../input.txt","r",stdin);
	ll n,k;
	
	cin>>n>>k;
	std::vector<ll> v;
	for (ll i = 0; i < n; ++i)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	cout<<minuteToWinIt(v,k);
	return 0;
}