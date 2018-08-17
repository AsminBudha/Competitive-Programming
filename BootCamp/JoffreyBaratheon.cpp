#include <iostream>
#include <stdio.h>	
#include <vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	string str;
	vector<string> st;
	while(n-->0){
		cin>>str;
		if(str=="pwd"){
			cout<<"/";
			for(std::vector<string>::iterator i=st.begin();i!=st.end();i++){
				cout<<*i<<"/";
			}
			 cout<<endl;
		}
		else if(str=="cd"){
			cin>>str;
			if(str[0]=='/'){
				while(!st.empty()) st.pop_back();
			}
			bool first=true;
			string temp="";
			for(int i=(str[0]=='/'?1:0);i<str.size();i++){
				if(str[i]=='/'){
					if(temp=="..") st.pop_back();
					else st.push_back(temp);
					// cout<<temp<<endl;
					temp="";
				}
				else{
					temp+=str[i];
				}
			}
			if(temp!=""){
				if(temp=="..") st.pop_back();
				else st.push_back(temp);
			}
		}
	}
	return 0;
}