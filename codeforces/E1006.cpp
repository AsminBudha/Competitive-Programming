#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int ans=0;
	for(int i=0;i<n/2;i++){
		int r=n-i-1;
		//swap(a[i],b[i])
		//swap(a[i],a[r])
		//swap(b[i],b[r])
		map<char,int> count;
			count[a[i]]++;
			count[a[r]]++;
			count[b[i]]++;
			count[b[r]]++;
		if(count.size()==3 && a[i]==a[r]){
			ans+=2;
		}
		else if(count.size()==3){
			ans++;
		}
		else if(count.size()==4){
			ans+=2;
		}
		else{
			int res=0;
			for(auto it:count){
				int rem=it.second/2;
				res+=it.second-2*rem;

			}
			ans+=res/2;
		}
		
	}
	if(n&1 && a[n/2]!=b[n/2]){
		ans++;
	}
	cout<<ans;
	return 0;
}