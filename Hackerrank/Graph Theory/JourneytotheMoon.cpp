#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long n,p;
long x,y;
std::vector<int> v[100001];
std::vector<int> graphs;
bool unvisited[100001];
int dfs(int count,long u){
	unvisited[u]=false;
	for(long i=0;i<v[u].size();i++){
		if (unvisited[v[u][i]])
		{
			count++;
			count=dfs(count,v[u][i]);
		}
	}
	return count;
}
ll getTotal(long n){
	if (n==1 || n==2)
	{
		return n-1;
	}
	ll ans=1;
	for (long i = n; i >n-2; i--)
	{
		ans*=i;
	}
	return ans/2;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("../../input.txt","r",stdin);
	cin>>n>>p;
	
	for (long i = 0; i < p; ++i)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	fill(unvisited,unvisited+n,true);
	ll ans=getTotal(n);
	// cout<<ans<<endl;
	for (long i = 0; i < n; ++i)
	{
		if (unvisited[i])
		{
			int c=dfs(1,i);
			// cout<<c<<endl;
			ans-=getTotal(c);
			// graphs.push_back(dfs(1,i));
		}
	}
	// long ans=0,size=graphs.size();
	// for (long i = 0; i < size; ++i)
	// {
	// 	for (long j = i+1; j < size; ++j)
	// 	{
	// 		ans+=(graphs[i]*graphs[j]);
	// 	}
	// }
	cout<<ans;
	return 0;
}