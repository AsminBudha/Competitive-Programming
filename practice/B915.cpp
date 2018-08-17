#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	if(l==1 && r==n){
		cout<<0;
	}
	else if(l==1){
		int ans=fabs(r-pos);
		ans++;
		cout<<ans;
	}
	else if(r==n){
		int ans=fabs(pos-l);
		ans++;
		cout<<ans;
	}
	else{
		bool isLeft=1;
		int left=fabs(pos-l);
		int right=fabs(r-pos);
		if(left<right) isLeft=1;
		else if(right<=left) isLeft=0;
		int ans=0;
		if (isLeft)
		{
			ans=left;
		}
		else{
			ans=right;
		}

		ans+=(r-l)+2;
		cout<<ans;
	}
	return 0;
}