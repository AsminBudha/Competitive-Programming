#include <iostream>
using namespace std;
long equal(int arr[],int no,int size){
	bool isEqual=true;
	for(int i=0;i<size-1;i++){
		if(arr[i]!=arr[i+1]){
			isEqual=false;
			break;
		}
	}
	if (isEqual)
	{
		return 0;
	}
	long ans=1e3;
	for (int i = 0; i < size; ++i)
	{
		/* code */
		//give 1 chocolate
		for(int j=0;j<size;j++){
			if(j==i) continue;
			arr[j]++;
		}
		ans=min(ans,equal(arr,no++,size));
		//give 2 chocolate....already increased by 1 so we only increase 1
		for(int j=0;j<size;j++){
			if(j==i) continue;
			arr[j]++;
		}
		ans=min(ans,equal(arr,no++,size));
		//give 5 chocolate....already increased by 2 so we only increase 3
		for(int j=0;j<size;j++){
			if(j==i) continue;
			arr[j]+=3;
		}
		ans=min(ans,equal(arr,no++,size));
		//revert back
		//give 2 chocolate....already increased by 1 so we only increase 1
		for(int j=0;j<size;j++){
			if(j==i) continue;
			arr[j]-=5;
		}
		
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t-->0){
		long n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<equal(arr,0,n)<<endl;

	}
	return 0;
}