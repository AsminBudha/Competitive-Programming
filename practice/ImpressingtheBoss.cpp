#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../input.txt","r",stdin);

	int t;
	cin>>t;
	
	while(t-->0){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			// sarr[i]=arr[i];	
		} 
		// sort(sarr,sarr+n);
		int ans=0;
    	for(int i=0;i<n-1;i++){
        	if(arr[i]>arr[i+1]) ans++;
        	// cout<<arr[i]<<" "<<sarr[i]<<endl;
    	}
    	// cout<<ans;
    	cout<<((ans<=1)?"YES\n":"NO\n");
	}
	return 0;
}