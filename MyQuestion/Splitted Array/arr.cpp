#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int findPeak(int arr[], int low, int high, int n)
{
    int mid = low + (high - low)/2;  
 	if ((mid == 0 || arr[mid-1] <= arr[mid]) &&
            (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;
 	else if (mid > 0 && arr[mid-1] > arr[mid])
        return findPeak(arr, low, (mid -1), n);
 
    else return findPeak(arr, (mid + 1), high, n);
}
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("input/input05.txt","r",stdin);
	freopen("output/output05.txt","w",stdout);
	ll n;
	cin>>n;
	int arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<findPeak(arr,0,n-1,n);
	return 0;
}
