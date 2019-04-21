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

ll Q,n;

ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
vector<ll> calcPrimes(ll range){
	std::vector<ll> primes;

	bool checkPrime[range+1];
	fill(checkPrime,checkPrime+range+1,true);

	checkPrime[0]=false;
	checkPrime[1]=false;
	for(ll i=2;i<=range;i++){

		if(checkPrime[i]){
			primes.push_back(i);
			ll temp=i+i;
			for(ll j=temp;j<=range;j+=i){
				checkPrime[j]=false;
				// cout<<j<<" ";
			}
			// cout<<endl;
		}
	}
	return primes;
}

map<ll,ll> coprimes(ll n){
	std::vector<ll> primes=calcPrimes(n);

	ll current=0;
	cout<<primes.size()<<"hello";
	map<ll,ll> coprimes;
	while(n>0){
		while(n%primes[current]==0){
			n/=primes[current];
			coprimes[primes[current]]++;
		}
		current++;
	}
	if(n>0){
		coprimes[n]++;
	}
	return coprimes;
}
int main()
{
    freopen("../input.txt","r",stdin);
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>Q;
    while(Q--){
    	cin>>n;
    	cout<<n;
    	map<ll,ll> cp=coprimes(n);
    	for(auto it:cp){
    		cout<<it.first<<" "<<it.second<<endl;
    	}
    	// ll ans=0;
    	// for(ll i=6;i*i<=n;i++){
    	// 	ll c=i*i;

    	// }	
    }

}
