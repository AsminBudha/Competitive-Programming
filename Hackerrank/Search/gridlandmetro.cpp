#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll search(map<ll,ll> m,ll c1,ll c2){
	ll l=0,r=m.size()-1;
	map<ll,ll>::iterator it;
	ll mid;
	while(l<=r){
		it=m.begin();

		mid=l+(r-l)/2;
		advance(it,mid);
		//cout<<it->first <<" "<< it->second<<" ->\n";
		if(((it->first)<=c1 && (it->second)>=c1)||(c2>=(it->first) && c2<=(it->second))){
			
			return mid;
		}
		else if(c2<mid){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}
int main(){
	freopen("../input.txt","r",stdin);
	map<ll,map<ll,ll> > maps;
	map<ll,map<ll,ll> >::iterator it;
	
	ll m,n,k;
	cin>>m>>n>>k;
	ll r,c1,c2;
	map<ll,ll>::iterator itsub;
	for(int i=0;i<k;i++){
		cin>>r>>c1>>c2;
		it=maps.find(r);
		map<ll,ll> mp;
		if(it==maps.end()){
			mp[c1]=c2;
			maps[r]=mp;
		}
		else{

			ll ind=search(maps[r],c1,c2);
			//cout<<ind<<endl;
			mp=maps[r];
			if(ind==-1){
				
				mp[c1]=c2;
				maps[r]=mp;
			}
			else{
				itsub=mp.begin();
				advance(itsub,ind);
				c1=min(c1,itsub->first);
				c2=max(c2,itsub->second);
				mp.erase(itsub);
				mp[c1]=c2;
				maps[r]=mp;
			}
		}
	}
	ll ans=m*n;
	//cout<<ans<<endl;
	it=maps.begin();
	for(;it!=maps.end();++it){
		map<ll,ll> mp=maps[it->first];
		itsub=mp.begin();
		
		for(;itsub!=mp.end();++itsub){
			ans-=((itsub->second)-(itsub->first)+1);
			//cout<< it->first <<"->"<< itsub->first <<" "<<itsub->second<<endl;
		}
	}
	cout<<ans;
	return 0;
}