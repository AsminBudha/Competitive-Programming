// A C++ Program to generate test cases for
// random strings
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
// Define the number of runs for the test data
// generated
#define RUN 100000
 
// Define the range of the test data generated
// Here it is 'a' to 'z'
#define MAX 25
 
// Define the maximum length of string
#define MAXLEN 100
 
int main()
{
    
      freopen ("input.txt", "w", stdout);
    // ll a=0,b=1;
    // while(a<=1e10){
    //     cout<<a<<endl;
    //     ll temp=a;
    //     a=b;
    //     b=temp+a;
    // }
    ll n=1e5;
    cout<<n<<endl;
    while(n-->0){
        ll x=1e12-n;
        cout<<x<<" ";
    }
    fclose(stdout);
    
    return(0);
}