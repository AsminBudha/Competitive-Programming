#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main(){
	string s;
	set<string> st;
	while(cin>>s){
		transform(s.begin(),s.end(),s.begin(),::tolower);
		string temp="";
		for(int i=0;i<s.size();i++){
			if(s[i]>='a' && s[i]<='z') temp+=s[i];
			else if(s[i]=='\'') break;
		}
		st.insert(temp);
	}
	for(set<string>::iterator i=st.begin();i!=st.end();i++) cout<<*i<<endl;
	return 0;
}