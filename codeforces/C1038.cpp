#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 100007


int main(){
	// freopen("../input.txt","r",stdin);
	
	ll n;
	cin>>n;
	ll a[n],b[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	ll suma=0,sumb=0;
	ll l1=n-1,l2=n-1;
	ll i=0;
	while(l1>=0 && l2>=0){
		if(i%2==0){
			if(a[l1]>b[l2]){
				suma+=a[l1];
				l1--;	
			} 
			else{
				b[l2]=0;
				l2--;
			}
		}
		else{
			if(b[l2]>a[l1]){
				sumb+=b[l2];
				l2--;
			}
			else{
				a[l1]=0;
				l1--;
			}
		}
		i++;
	}
	if(i%2==0 && l2>=0){
		b[l2]=0;
		l2--;
	}
	else if(i%2==1 && l1>=0){
		a[l1]=0;
		l1--;
	}
	if(l1>=0){
		suma+=a[l1];
		l1--;
	}
	if(l2>=0){
		sumb+=b[l2];
		l2--;
	}
	cout<<suma-sumb;
	return 0;
}	