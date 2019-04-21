#include <bits/stdc++.h>
#include <unordered_set>
typedef long long ll;
using namespace std;

int calculateMex(unordered_set<int> Set)
{
    int Mex = 0;
 
    while (Set.find(Mex) != Set.end())
        Mex++;
 
    return (Mex);
}
 
int calculateGrundy (int n,int turn)
{
    if (n == 0)
        return (0);
 
    unordered_set<int> Set;
 	
 	if(turn==0)
    	Set.insert(calculateGrundy(n/2,1));
    else
    	Set.insert(calculateGrundy(n/2,0));
 
    return (calculateMex(Set));
}
int main(){
	// freopen("../input.txt","r",stdin);
	// ll n;
	// cin>>n;
	int ans;
	// if(n%2==0)
	// 	calculateGrundy(n,0);
	// else 
	// 	ans=1;
	cout<<((ans==0)?"Mahmoud":"Ehab");
	return 0;
}