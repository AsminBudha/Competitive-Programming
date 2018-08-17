#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	long t;
	cin>>t;
	long long x;
	while(t-->0){
		cin>>x;
		cout<<x/2+1<<"\n";
	}
	return 0;
}