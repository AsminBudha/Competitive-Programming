#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	// freopen("../input.txt","r",stdin);
	string str;
	cin>>str;
	if(str.size()<26){
		cout<<-1;
		return 0;
	}
	char a='a';
	int in=0;
	while(in<26 && a<='z'){
		char c=str[in];
		if(c<=a){
			str[in]=a;
			in++;
			a++;
		}
		else{
			in++;
		}

	}
	// cout<<a;
	if (a=='z'+1)
	{
		cout<<str;
	}
	else cout<<-1;

	return 0;
}