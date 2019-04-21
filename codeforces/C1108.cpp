#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	freopen("../input.txt","r",stdin);
	ll n;
	cin>>n;
	
	string s;
	cin>>s;
	
	ll counts[3][3];
	std::map<char, int> mp;
	mp['R']=0;
	mp['G']=1;
	mp['B']=2;

	for(int i=0;i<3;i++){
		fill(counts[i],counts[i]+3,0);
	}

	for(ll i=0;i<s.size();i++){
		counts[mp[s[i]]][i%3]++;
	}

	for(ll i=0;i<3;i++){
		for(ll j=0;j<3;j++){
			cout<<counts[i][j]<<" ";
		}
		cout<<endl;
	}

	std::vector<char> ans[3];
	for(int i=0;i<3;i++){
		if(counts[0][i]>counts[1][i] && counts[0][i]> counts[2][i]){
			ans[i].push_back('R');
		}
		else if(counts[1][i]>counts[0][i] && counts[1][i]> counts[2][i]){
			ans[i].push_back('G');
		}
		else if(counts[2][i]>counts[1][i] && counts[2][i]> counts[0][i]){
			ans[i].push_back('B');
		}
	}

	return 0;
}