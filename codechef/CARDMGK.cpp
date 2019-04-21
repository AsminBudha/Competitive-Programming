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

ll t,n,arr[(ll)1e5+7];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll i=0;
		for (i = 1; i < n; ++i)
		{
			if(arr[i-1]>arr[i]){
				break;
			}
		}
		if(i>=n){
			cout<<"YES\n";
			continue;
		}
		i++;
		// cout<<i<<" ";
		for (; i < n; ++i)
		{
			if(arr[i-1]>arr[i]){
				break;
			}
		}
		if(i>=n){
			if(arr[0]>=arr[n-1])
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";

	}
	
	return 0;
}