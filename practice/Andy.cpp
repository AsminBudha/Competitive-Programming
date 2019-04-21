
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../input.txt","r",stdin);
	int t;
	cin>>t;
	string s;
	cin>>s;
	ll arr[t];
	ll sum=0;
	ll cum[t];
	for(int i=0;i<t;i++){
		arr[i]=(int)s[i]-'0';
		sum+=arr[i];
	}
	sort(arr,arr+t);
	cum[0]=arr[0];
	for (int i = 1; i < t; ++i)
	{
		cum[i]=cum[i-1]+arr[i];
	}
	cout<<sum<<endl;
	for (int i = 2; i < sum; ++i)
	{
		if(sum%i==0){
			ll start=sum/i;
			for (int j = 0; j < t; ++j)
			{
				if(cum[j]==start){
					start+=(sum/i);
				}
			}
			cout<<start-(sum/i)<<" ";
			if(start-(sum/i)==sum){
				cout<<"YES";
				break;
			}
		}
	}
	cout<<"NO";
	return 0;
}