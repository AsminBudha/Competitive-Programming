#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000000

ll n,q,l,r;
string x;
std::map<ll, ll> tree;

void build(ll arr[],ll node,ll start,ll end);

void init(ll arr[],ll n){
	build(arr,0,0,n-1);
}

void build(ll arr[],ll node,ll start,ll end){
	if(start==end){
		tree[node]=arr[start];
	}
	else{
		ll mid=start+(end-start)/2;
		build(arr,2*node+1,start,mid);
		build(arr,2*node+2,mid+1,end);

		tree[node]=min(tree[2*node+1],tree[2*node+2]);
	}
}

void update(ll node,ll start,ll end,ll index,ll val){
	if(start==end && start==index){
		tree[node]=val;
	}
	else if(index>=start && index<=end){
		ll mid=start+(end-start)/2;
		update(2*node+1,start,mid,index,val);
		update(2*node+2,mid+1,end,index,val);

		tree[node]=min(tree[2*node+1],tree[2*node+2]);
	}
}


ll query(ll node,ll start,ll end, ll l, ll r){
	if(start>=l && end<=r){
		return tree[node];
	}
	else if(r<start || l>end){
		return MAX;
	}
	else{
		ll mid=start+(end-start)/2;
		ll left=query(node*2+1,start,mid,l,r);
		ll right=query(node*2+2,mid+1,end,l,r);

		return min(left,right);
		
	}
}

int main(){
	freopen("../input.txt","r",stdin);
	cin>>n>>q;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	init(arr,n);
	// for(auto it:tree){
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
	while(q--){
		cin>>x;
		cin>>l>>r;
		// cout<<x<<"=>"<<endl;
		if(x=="q"){
			cout<<query(0,0,n-1,l-1,r-1)<<endl;
		}
		else{
			update(0,0,n-1,l-1,r);
		}
	}

	return 0;
}	