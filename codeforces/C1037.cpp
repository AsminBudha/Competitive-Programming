#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
char flip(char c){
	if(c=='0') return '1';
	else return '0';
}
int main(){
	// freopen("../input.txt","r",stdin);
	long n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	long ans=0;
	for (long i = 0; i < n; ++i)
	{
		if(a[i]==b[i]) continue;
		if(i+1<n && a[i]==b[i+1] && a[i+1]==b[i]){
			ans++;
			// cout<<a[i]<<" "<<a[i+1]<<endl;
			swap(a[i],a[i+1]);
			// cout<<a[i]<<" "<<a[i+1]<<endl;
		}
		else{
			a[i]=flip(a[i]);
			ans++;
		}
	}
	cout<<ans;
	return 0;
}	