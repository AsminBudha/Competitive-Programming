#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

//typedefs
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef map<int, int> mii;

//Constants
const ll MOD = 10e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

ll t,n;

int main()
{
	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0){
			cout<<n/2<<" "<<n/2<<endl;
		}
		else{
			cout<<(n+1)/2<<" "<<n/2<<endl;
		}
		// cout<<ceil((double)n/2)<<" "<<(n/2)<<endl;	
	}
	return 0;
}