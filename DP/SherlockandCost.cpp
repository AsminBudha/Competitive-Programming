#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0){
		long n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int rev[n];
		for(int i=n-1;i>=0;i--)  rev[i]=arr[n-1-(i)];
		long ans=0;
		long asc=0;
		long desc=n-1;
		for(int i=0;i<n;i++){
			ans+=fabs(arr[desc]-arr[asc]);
			if(i&1==0) desc--;
			else asc++;

		}
		cout<<ans<<endl;
	}
	return 0;
}