#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	string in;
	cin>>in;
	for (int i = 0; i < 3; ++i)
	{
		cout<<a[in[i]-'A']<<" ";
	}
	return 0;
}