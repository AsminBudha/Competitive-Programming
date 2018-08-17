#include <bits/stdc++.h>
typedef long long ll;

#define N (long long)(1e9+1)
using namespace std;
void simpleSieve(int lim,std::vector<int> &v){
	bool prime[lim];
	fill(prime,prime+lim,true);
	for (int i = 2; i < lim; ++i)
	{
		if (prime[i])
		{
			v.push_back(i);
			for (int j = 2*i; j < lim; j+=i)
			{
				prime[j]=false;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../../input.txt","r",stdin);

	

	ll a,b;
	cin>>a>>b;
	b++;
	int block_size=ceil(sqrt((double)b));
	int blocks=(double)b/block_size;
	
	std::vector<int> prime;
	simpleSieve(block_size,prime);
	
	int low=(a/block_size)*block_size;
	if (low<block_size)
	{
		low=block_size;
	}
	int high=low+block_size;
	
	while(low<b){
		if(high>=b) high=b;
		
		bool mark[block_size];
		fill(mark,mark+block_size,true);
		for (int j=0;j<prime.size() && prime[j]<=block_size;j++)
		{
			
				int st=(low/prime[j])*prime[j];
				if (st<low)st+=prime[j];
				for (int i = st; i < high; i+=prime[j])
				{

					mark[i-low]=false;
				}
		}
		for (int i = low; i < high; ++i)
		{
			if (mark[i-low]==true && i>=a)
			{
				prime.push_back(i);
				
			}
		}
		low+=block_size;
		high+=block_size;
	}
	ll ans=0;
	int start=0;
	// cout<<prime.size();
	while(start<prime.size() && prime[start]<a) start++;
	// cout<<start<<" "<<prime.size()-1;
	for (ll i = start; i<prime.size(); ++i)
	{
		
		if (prime[i+1]-prime[i]==2)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}