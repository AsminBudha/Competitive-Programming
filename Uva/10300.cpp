#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("../input.txt","r",stdin);
	int T;
	cin>>T;
	while(T-->0){
		double ans=0;
		int t;
		cin>>t;
		int x,y,z;
		while(t-->0){
			cin>>x>>y>>z;
			ans+=(((double)x/y)*z*y);
		}
		cout<<(int)ans<<endl;
	}
	return 0;
}