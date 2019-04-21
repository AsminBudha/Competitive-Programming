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

ll n;

std::vector<ll> primes;

void calcPrimes(ll range){
	bool checkPrime[range+1];
	fill(checkPrime,checkPrime+range+1,true);

	checkPrime[0]=false;
	checkPrime[1]=false;

	for(ll i=2;i<=n;i++){
		if(checkPrime[i]){

			primes.push_back(i);
			ll temp=i+i;
			for(ll j=temp;j<=n;j+=i){
				checkPrime[j]=false;
				// cout<<j<<" ";
			}
			// cout<<endl;
		}
	}
}

ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main()
{
    freopen("../input.txt","r",stdin);
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    ll g[n];
    for(ll i=0;i<n;i++){
    	g[i]=1;
    }
	
	ll currentColor=1;
    calcPrimes(n);
    for(auto it:primes){

    	if(it*2-2<n){
    		g[it-2]++;
    	}
    }

    // for(ll i=0;i<n;i++){
    // 	ll temp=currentColor;
    // 	for(ll j=i+1;j<n;j++){
    // 		if(gcd(i+2,j+2)>1){
    // 			g[j]=g[i]+1;
    // 			temp=currentColor+1;
    // 		}
    // 	}
    // 	currentColor=temp;
    // }
    // // calcPrimes(n);

    // // ll currentColor=1;

    // queue<ll> q;
    // q.push(0);

    // while(q.size()){
    // 	ll u=q.front();
    // 	q.pop();
    	
    // }
    // cout<<endl;
    ll ans=1;
    for(ll i=0;i<n;i++){
    	ans=max(ans,g[i]);
    }
    cout<<ans<<endl;
    for(ll i=0;i<n;i++){
    	cout<<g[i]<<" ";
    }

}
