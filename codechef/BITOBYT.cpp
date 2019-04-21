#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	// freopen("../input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[3]={1,0,0};
		for(int i=2;i<=n;i++){
			// cout<<i<<" ";
			if(i%2==1){
				arr[0]--;
				arr[1]++;
				i+=8;
			}
			else if(i%10==1){
				arr[1]--;
				arr[2]++;
				i+=16;
			}
			else if(i%26==1){
				arr[2]--;
				arr[0]+=2;
			}
		}
		
		for (int i = 0; i < 3; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}