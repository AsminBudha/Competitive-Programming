#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 100007

int n,k;

int main(){
	// freopen("../input.txt","r",stdin);
	
	cin>>n>>k;
	string s;
	cin>>s;
	int arr[k];
	fill(arr,arr+k,0);
	// int ans=0;
	for(int i=0;i<n;i++){
		arr[s[i]-'A']++;
		
		// ans=max(ans,m);
	}
	int m=MAX;
	for (int j = 0; j < k; ++j)
	{
		m=min(m,arr[j]);
	}

	
	cout<<(k*m);
	return 0;
}	