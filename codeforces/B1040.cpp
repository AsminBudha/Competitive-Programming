#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000000

int n,k;

int main(){
	// freopen("../input.txt","r",stdin);
	
	cin>>n>>k;
	if(k==0){
		cout<<n; 
		return 0;
	} 
	if(n<=k+1){
		cout<<1<<endl<<1;
		return 0;
	}

	for(int i=k+1;i>0;i--){
		int x=n-i-k;
		if(x<=0){
			cout<<1<<endl;
			cout<<i;
			return 0;
		}
		// cout<<i<<" "<<x<<" ";
		double rem=(double)x/(2*k+1);
		// cout<<rem<<endl;
		if(rem==(int)rem || rem-(int)rem>=0.5){
			cout<<ceil((double)n/(2*k+1))<<endl;
			cout<<i<<" ";
			i+=k+1;
			for(int j=i+k;j<=n;j+=k+1){
				cout<<j<<" ";
				j+=k;
			}
			return 0;
		}
	}
	
	return 0;
}	