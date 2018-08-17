#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);
	
	map<char,int> map;
	map['a']=1;
	map['o']=1;
	map['y']=1;
	map['e']=1;
	map['u']=1;
	map['i']=1;
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){
		str[i]=(char)tolower(str[i]);
		if(map[str[i]]==0) cout<<"."<<str[i];
	}
	return 0;
}	