#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	// freopen("../input.txt","r",stdin);

	ll n;
	cin>>n;
	ll a[n],b[n/2];
	for(ll i=0;i<n/2;i++){
		cin>>b[i];
		a[n-i-1]=b[i];
		a[i]=0;
	}

	ll last=a[n-1];
	ll first=0;
	for(ll i=0;i<n/2;i++){
		if(a[n-i-1]>last || a[i]<first){
			ll temp=a[n-i-1];
			
			if(temp-last<first){
				a[i]=first;
				a[n-i-1]=temp-first;

				if(a[n-i-1]>last){
					temp=a[n-i-1];
					a[n-i-1]=last;
					a[i]+=temp-last;
					first=a[i];
				}
				else{
					last=a[n-i-1];
				}
			}
			else{
				a[n-i-1]=last;

				a[i]=temp-last;
				first=a[i];
			}
		}
		else{
			last=a[n-i-1];
			first=a[i];
		}
	}

	for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}