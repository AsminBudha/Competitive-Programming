#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000000
int main(){
	// freopen("input.txt","r",stdin);
	int n,a,b;
	cin>>n>>a>>b;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int l=0,r=n-1;
	int ans=0;
	while(l<r){
		if(arr[l]==2 && arr[r]==2){
			ans+=2*min(a,b);
		}
		else if(arr[l]==arr[r]){
			l++;r--;
			continue;
		}
		else{
			if(arr[r]!=2 && arr[l]==2){
				if(arr[r]){
					ans+=b;
				}
				else ans+=a;
				// ans+= (arr[r])?b:a;
			}
			else if(arr[l]!=2 && arr[r]==2){
				if(arr[l]){
					ans+=b;
				}
				else ans+=a;
				// ans+= (arr[l])?b:a;
			}
			else{
				cout<<-1;
				return 0;
			}
		}
		l++;r--;
	}
	if(l==r && arr[l]==2) ans+=min(a,b); 
	cout<<ans;
	return 0;
}	