#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	std::vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	bool finger[10];
	fill(finger,finger+10,false);
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin>>x;
		finger[x]=true;
	}
	for (int i = 0; i < n; ++i)
	{
		if (finger[v[i]])
		{
			cout<<v[i]<<" ";
		}
	}
	return 0;
}