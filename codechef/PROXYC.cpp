#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	freopen("../input.txt","r",stdin);
	
	ll T,n;
	string s;
	cin>>T;
	while(T--){
	    cin>>n>>s;
	    ll a=0,b,c;
	    b=ceil(n*0.75);
	    c=0;
	    for(ll i=0;i<n;i++){
	        if(s[i]=='P'){
	            a++;
	        }
	        else if((i>=2 && i<n-2) && (s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P')){
	            cout<<i<<" ";
	            c++;
	        }
	    }
	    cout<<endl;
	    b-=a;
	    cout<<b<<"->"<<c<<endl;
	    if(b<=0){
	        cout<<0<<endl;
	    }else if(c>=b){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
