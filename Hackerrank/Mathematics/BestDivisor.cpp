#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

//typedefs
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<long, long> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef map<int, int> mii;

//Constants
const ull MOD = 1e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
bool prime[MAX+1];
std::vector<ll> vprimes;
long sum(long n){
	long sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	// freopen("../../input.txt","r",stdin);
	long n;
	cin>>n;
	long ans=sum(n);
	long num=n;
	for (long i = 1; i*i <= n; ++i)
	{
		if (n%i==0)
		{
			long s=sum(i);
			ans=max(ans,s);
			if (ans==s)
			{
				num=min(num,i);
			}
			s=sum(n/i);
			ans=max(ans,s);
			if (ans==s)
			{
				num=min(num,n/i);
			}
			
		}
	}
	cout<<num;
	return 0;
}