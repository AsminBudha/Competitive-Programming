#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	string in[n];
	for(int i=0;i<n;i++){
		cin>>in[i];
	}
	bool can[n];
	memset(can,true,n);
	for(int i=0;i<m;i++){
		std::vector<int> v;
		for(int j=0;j<n;j++){
			if (in[j][i]=='1' && can[j])
			{
				v.push_back(j);
			}
		}
		if(v.size()==1){
			can[v[0]]=false;
		}

	}
	for(int i=0;i<n;i++){
		if(can[i]){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}