#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../../input.txt","r",stdin);

	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	bool black=true;
	bool x=(r1%2==c1%2);
	bool y=(r2%2==c2%2);
	if (x!=y)
	{
		cout<<-1;
	}
	else{
		cout<<1;
	}
	return 0;
}