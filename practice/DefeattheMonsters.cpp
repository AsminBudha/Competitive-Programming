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

int t,n,arr[(int)1e5+1];
int main()
{
	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		map<int,int> primes;
		set<int> primefact;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]%2==0){
				primes[2]++;
				while(arr[i]%2==0){
					arr[i]/=2;
				}
			}
			for (int j = 3; j*j <=arr[i]; j+=2)
			{
				if(arr[i]%j==0) primes[j]++;
				while(arr[i]%j==0){
					arr[i]/=j;
				}
				if(arr[i]==1) break;
			}

			if(arr[i]>2){
				primes[arr[i]]++;
			}
		}
		int ans=0;
		for(auto it: primes){
			ans+=ceil(it.second/(double)3);
		}
		cout<<ans<<endl;
	}
	return 0;
}