#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define MAX 1000000000
int main(){
	freopen("../input.txt","r",stdin);
	ll n,k;
	cin>>n>>k;
	
	priority_queue<ll, vector<ll>, greater<ll> > temp;
    
    for(ll i=0;i<n;i++){
    	ll x;
    	cin>>x;
        temp.push(x);  
    } 
    if(temp.top()>=k){
    	cout<<0;
        return 0;
    }
    else if(n==1){
        cout<< (temp.top()>=k)?0:-11;
        return 0;
    }
    
    
    while(true){
        
        ll a=temp.top();
        // cout<<a;
        if(a>=k) break;
        temp.pop();
        
        if(temp.size()<1){
        	cout<<-12;
        	return 0;
        } 
        
        ll b=temp.top();
        temp.pop();
        
        
        
        ll x=a+2*b;
        temp.push(x);
        
    }
    cout<< n-temp.size();
	return 0;
}	