#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("../input.txt","r",stdin);
	int x,y;
	std::vector< pair<int,int> > s1;
	std::vector< pair<int,int> > s2;
	pair<int,int> center1;
	pair<int,int> center2;
	int minx=100,maxx=-100,miny=100,maxy=-100;
	for (int i = 0; i < 4; ++i)
	{
		cin>>x>>y;
		minx=min(x,minx);
		maxx=max(x,maxx);
		miny=min(y,miny);
		maxy=max(y,maxy);
		s1.push_back(make_pair(x,y));
	}
	bool isout=true;
	bool inside=false;
	int minx2=100,maxx2=-100,miny2=100,maxy2=-100;
	// cout<<minx<<" "<<maxx<<" "<<miny<<" "<<maxy<<endl;
	for (int i = 0; i < 4; ++i)
	{
		cin>>x>>y;
		minx2=min(x+y,minx2);
		maxx2=max(x+y,maxx2);
		miny2=min(x-y,miny2);
		maxy2=max(x-y,maxy2);
		if (x>=minx && x<=maxx)
		{
			isout=false;
			if (y>=miny && y<=maxy)
			{
				// cout<<x<<" "<<y<<endl;
				inside=true;
			}
		}

		s2.push_back(make_pair(x,y));
	}
	for (int i = 0; i < 4; ++i)
	{
		x=s1[i].first,y=s1[i].second;
		s1[i].first=x+y;
		s1[i].second=x-y;
	}
	bool inside2=false;
	for (int i = 0; i < 4; ++i)
	{
		
		x=s1[i].first,y=s1[i].second;
		if (x>=minx2 && x<=maxx2)
		{
			
			if (y>=miny2 && y<=maxy2)
			{

				inside2=true;
			}
		}
	}
	if (isout)
	{
		
		cout<<"NO";
		return 0;
	}
	else if (inside || inside2)
	{
		
		cout<<"YES";
		return 0;
	}
	else{
		cout<<"NO";
	}
	return 0;
}