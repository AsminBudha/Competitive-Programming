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
string k;

int main()
{
	freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll arr[n];
		ll minVal=k/n;
		ll howMany=k-minVal*n;
		ll lLimit=howMany,rLimit=n-howMany;
		ll indexer=0;
		while(lLimit>0 && rLimit>0){
			if(lLimit>rLimit){
				arr[indexer]=minVal+1;
				indexer++;
				lLimit--;
				arr[indexer]=minVal;
				indexer++;
				rLimit--;	
			}
			else{

				arr[indexer]=minVal;
				indexer++;
				rLimit--;
				arr[indexer]=minVal+1;
				indexer++;
				lLimit--;
			}
			
		}
		while(lLimit>0){
			arr[indexer]=minVal+1;
			indexer++;
			lLimit--;
		}
		while(rLimit>0){
			arr[indexer]=minVal;
			indexer++;
			rLimit--;
		}
		for(ll i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		ll ans=0;
		for(ll i=1;i<n;i++){
			ans+=abs(arr[i-1]-arr[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}