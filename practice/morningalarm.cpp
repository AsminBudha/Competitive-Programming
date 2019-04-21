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
map<long, long> cycle;
vector<long> vect(10001);

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
ll findlcm(ll arr[], ll n) 
{  
    ll ans = 1;  
    for (ll i = 0; i < n; i++){
    	if(arr[i]==0)
    		continue;
    	ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
    } 
        
  
    return ans; 
} 

int main()
{
	freopen("../input.txt","r",stdin);
	ll n;
	cin>>n;
	ll arr[n];
	map<int,ll> mp;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
		
	}
	ll LCM=findlcm(arr,n);
	ll count=0;
	for (int i = 1;i<LCM; ++i)
	{
		if(LCM%i==0 && !mp[i]){
			count++;
			// cout<<i<<" ";
		}
	}
	// cout<<endl;
	cout<<LCM<<" "<<count;
	return 0;
}