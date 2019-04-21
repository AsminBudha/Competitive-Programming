#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000007

int main(){
	freopen("../input.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	// if(s.size()-1>t.size()){
	// 	cout<<"NO";
	// 	return 0;
	// }

	// int l=0,x=0;
	// while(l<s.size() && s[l]!='*'){
	// 	if (x<t.size() && s[l]==t[x])
	// 	{
	// 		x++;l++;
	// 	}
	// 	else{
	// 		cout<<"NO";
	// 		return 0;
	// 	} 
	// }
	// if(l==s.size() && x==t.size()){
	// 	cout<<"YES";
	// 	return 0;
	// }
	// else if(l==s.size() && x<t.size()){
	// 	cout<<"NO";
	// 	return 0;
	// }
	// // cout<<l<<" ";
	// int r=s.size()-1,y=t.size()-1;
	// while(r>=0 && s[r]!='*'){
	// 	if(y>=0 && s[r]==t[y]){
	// 		r--;y--;
	// 	}
	// 	else{
	// 		// cout<<r<<" "<<y<<endl;
	// 		cout<<"NO";
	// 		return 0;
	// 	}
	// }
	// // cout<<x<<" "<<y;
	// if(l==r && x-1<=y) cout<<"YES";
	// else cout<<"NO";
	size_t x=s.find("*");
	if(x==string::npos){
		string res= (s==t)?"YES":"NO";
		cout<<res;
	}
	else{
		string first=
	}
	return 0;
}