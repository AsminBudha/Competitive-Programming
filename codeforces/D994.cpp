#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	std::vector< pair<int,int> > p1;
	std::vector< pair<int,int> > p2;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		p1.push_back(make_pair(x,y));
		
	}
	std::vector<int> common;
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin>>x>>y;
		bool found=false;
		for (auto it=p1.begin();it<=p1.end();it++)
		{
			int a=(*it).first,b=(*it).second;
			// cout<<a<<" "<<b<<endl;
			if (a==x && b==y)
			{
				p1.erase(it);
				found=true;
			}
			else if(a==x){
				// cout<<a<<endl;
				common.push_back(a);
			}
			else if(b==y){

				common.push_back(b);
			}
		}
		if (found)
		{
			continue;
		}
		
	}
	int sz=common.size();
	// cout<<sz;
	if (sz==0)
	{
		cout<< -1;
	}
	else if(sz==1){
		cout<<common[0];
	}
	else cout<<0;
	return 0;
}