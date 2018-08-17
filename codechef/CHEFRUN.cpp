#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	int t;
	cin>>t;
	
	while(t-->0){
		int x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		int a=abs(x1-x3);
		int b=abs(x2-x3);
		double av=a/(double)v1;
		double bv=b/(double)v2;
		cout<<((av==bv)?"Draw":(av<bv?"Chef":"Kefa"));
		cout<<endl;
	}
	return 0;
}