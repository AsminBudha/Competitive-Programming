#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	//freopen("input.txt","r",stdin);
	ll n,m,k;
	cin>>n>>m>>k;
	vector<pair<ll,ll> > graph[n+1];
	while(m-->0){
		ll u,v,l;
		cin>>u>>v>>l;
		graph[u].push_back(make_pair(v,l));
	}
	if(k==0) cout<<"-1";
	else{
		ll ans=-1;
		while(k-->0){
			ll n;
			cin>>n;
			for(std::vector<pair<ll,ll> >::iterator i=graph[n].begin();i!=graph[n].end();i++){
				if(i->second<ans || ans==-1) ans=i->second;
			}
		}
		cout<<ans;
	}

	return 0;
}