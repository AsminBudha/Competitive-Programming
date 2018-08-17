#include <iostream>
#include <stack>
using namespace std;
int main(){
	unsigned int n;
	cin>>n;
	string str;
	stack<char> st;
	getline(cin,str);
	while(n-->0){
		getline(cin,str);
		//cout<<str;
		bool isOK=true;
		for(int i=0;i<str.size();i++){
			if(str[i]=='('||str[i]=='[') st.push(str[i]);
			else if(st.empty()){
			    isOK=false;
			    break;
			}
			else if(str[i]==')' && st.top()=='(') st.pop();
			else if(str[i]==']' && st.top()=='[') st.pop();
			else{
			  isOK=false;
			  break;  
			} 
			
		}
		if(st.empty() && isOK) cout<<"Yes\n";
		else cout<<"No\n";
		while(!st.empty()) st.pop();
	}
	return 0;
}