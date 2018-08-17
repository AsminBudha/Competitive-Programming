#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000007
ll fact[1001];
void factorial(){
	
	fact[0]=1;
	for (int i = 1; i < 1001; ++i)
	{
		fact[i]=(i*fact[i-1])%MAX;
	}
}
int main(){
	// freopen("../../input.txt","r",stdin);
	factorial();
	int t;
	cin>>t;
	int n,m;
	while(t--){
		cin>>n>>m;
		long ans=fact[n+m-1]/((fact[n]*fact[m-1])%MAX);
		// cout<<fact[n+m-1]<<" "<<fact[n]+fact[m-1];
		cout<<ans<<endl;
	}
	return 0;
}