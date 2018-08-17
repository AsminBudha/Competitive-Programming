#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0 && arr[i]>=arr[k-1]) ans++;
		else break;
	}
	cout<<ans;
	return 0;
}