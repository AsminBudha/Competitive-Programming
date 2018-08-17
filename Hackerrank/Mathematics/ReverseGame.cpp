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

int main()
{
	// freopen("../../input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		long x,y;
		cin>>x>>y;
		if(y<x-y-1){
			long diff=y;
			cout<<diff*2+1<<endl;
		}
		else{
			long diff=x-y-1;
			cout<<diff*2<<endl;
		}
	}
	return 0;
}