#include <bits/stdc++.h>
using namespace std;
int main(){

	int arr[]={34,-50,42,14,-5,86};
	int sum=0;
	int best=-10000;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i)
	{
		sum+=arr[i];
		if(sum<0){
			sum=arr[i];
		}
		best=max(best,sum);
	}
	cout<<best;
	return 0;

}