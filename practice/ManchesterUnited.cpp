#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
double polygonArea(ll X[], ll Y[], ll n)
{
    double area = 0.0;
 
    ll j = n - 1;
    for (ll i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i; 
    }
    return abs(area / 2.0);
}
ll gcd(int a, int b)
{
    if (b == 0)
       return a;
    return gcd(b, a%b);
}
 ll getCount(ll x1, ll y1, ll x2, ll y2)
{

    if (x1==x2)
        return abs(y1 - y2) - 1;
 
    if (y1 == y2)
        return abs(x1-x2) - 1;
 
    return gcd(abs(x1-x2), abs(y1-y2))-1;
}
int main(){
	//freopen("input.txt","r",stdin);
	
	ll n;
	while((cin>>n)){
		if(n==0) break;
		ll X[n],Y[n];
		ll b=0;
		cin>>X[0]>>Y[0];
		ll num;
		for(ll i=1;i<n;i++){
			cin>>X[i]>>Y[i];
			num=getCount(X[i-1],Y[i-1],X[i],Y[i]);
			
			b+=num;
		}
		num=getCount(X[0],Y[0],X[n-1],Y[n-1]);
		b+=num;
		
		double a=polygonArea(X,Y,n);
		b+=n;
		cout<<(ll)(a+1-(double)b/2)<<endl;
	}
	
	return 0;
}
