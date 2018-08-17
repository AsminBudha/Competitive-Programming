#include <iostream>

typedef long long int lli;
using namespace std;
lli primeFactors(lli n)
{	
	lli sum=0;
    while (n%2 == 0)
    {
        sum+=2;
        n = n/2;
    }
    for (lli i = 3; i*i <= n; i = i+2)
    {
        while (n%i == 0)
        {
        	if(i>10){
        		lli temp=i;
        		while(temp>0){
        			int rem=temp%10;
        			sum+=rem;
        			temp/=10;
        		}
        	}
        	else
            	sum+=i;
            n = n/i;
        }
    }
 
    if (n > 2){
        if(n>10){
        		lli temp=n;
        		while(temp>0){
        			int rem=temp%10;
        			sum+=rem;
        			temp/=10;
        		}
        	}
        	else
            	sum+=n;
    }
    return sum;
}
int main(){
	lli n;
	cin>>n;
	lli temp=n;
	lli sum=0;
	while(temp>0){
		int rem=temp%10;
		temp/=10;
		sum+=rem;
	}
	lli ans=primeFactors(n);
	if(ans==sum) cout<<1;
	else cout<<0;
	return 0;
}