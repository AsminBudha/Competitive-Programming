#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isAnagram(string a,string b){
	int c[26];
	fill(c,c+26,0);
	for(int i=0;i<a.size();i++){
		c[a[i]-'a']++;
	}

	for(int i=0;i<b.size();i++){
		c[b[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(c[i]){
			return false;
		}
	}
	return true;
}
bool comp(string a,string b){
	return a.size()<b.size();
}
int main(){

	// freopen("../../input.txt","r",stdin);

	int q;
	cin>>q;
	string s;
	while(q--){
		cin>>s;
		std::vector<string> subs;
		string temp="";
		for(int i=0;i<s.size();i++){
			temp=s[i];
			subs.push_back(temp);
			for(int j=i+1;j<s.size();j++){
				temp+=s[j];
				subs.push_back(temp);
			}
		}
		int ans=0;
		sort(subs.begin(),subs.end(),comp);
		for(int i=0;i<subs.size();i++){
			for(int j=i+1;j<subs.size();j++){
				if(subs[j].size()>subs[i].size()){
					break;
				}
				if(isAnagram(subs[i],subs[j])){
					ans++;
				}
			}
		}

		cout<<ans<<"\n";
	}
	return 0;
}