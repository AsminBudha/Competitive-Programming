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

int t,k,n,a[10001],cf[10001];
ll sq[10001];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll sum=0,sqsum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			cf[i]=sum;
			sqsum+=(a[i]*a[i]);
			sq[i]=sqsum;
		}
		sort(a,a+n);
		for(int i=n-1;i>=0 && k>0;i--,k--){
			sq[n-1]-=(a[i]*a[i]);
			cf[n-1]-=a[i];
			// cout<<sq[n-1]<<" "<<cf[n-1]<<endl;
		}
		// cout<<sq[n-1]<<" "<<cf[n-1];
		if(sq[n-1]<=cf[n-1]){
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}

	return 0;
}