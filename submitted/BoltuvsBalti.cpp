	#include <iostream>
	#include <cmath>
	typedef unsigned long long lli;
	using namespace std;
	int main(){
		lli n,m;
		while(cin>>n>>m){
			
			lli a=min(n,m);
			lli b=max(m,n);
			a--;
			lli ans=((long double)b*(long double)(b+1)/2)-((long double)a*(long double)(a+1)/2);
			cout<<"Sum of "<<a+1<<" to "<<b<<" is -> "<<ans<<";\n";
		}
		return 0;
	}