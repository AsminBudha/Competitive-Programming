#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	
	// freopen("../input.txt","r",stdin);
	int arr[16];
	
	for (int i = 0; i < 16; ++i)
	{
		cin>>arr[i];
		
	}
	
	int count=0;
	for (int i = 4; i < 16; ++i)
	{
		if (abs(arr[i]-arr[3])<300)
		{
			count++;
		}
	}
	cout<<count+4;
	return 0;
}