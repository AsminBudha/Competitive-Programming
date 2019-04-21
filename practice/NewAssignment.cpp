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

int t,n;
ll a[100007];

ll gcd(ll a,ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		std::vector<ll> vm;
		std::vector<ll> vf;
		char c;
		for(int i=0;i<n;i++){
			cin>>c;
			if(c=='M')
				vm.push_back(a[i]);
			else
				vf.push_back(a[i]);
		}
		
		ll totM=vm.size(),totF=vf.size();
		ll F=vf.size();
		ll ans=0;
		int last=0;
		for(auto it:vm){
			for(int i=0;i<F-last;i++){
				if(gcd(it,vf[i])>1){
					ans++;
					totM--;
					totF--;
					swap(vf[i],vf[F-1-last]);
					last++;
					break;
				}
			}
			if(totF<=0) break;
		}
		ans+=totF+totM;
		cout<<ans<<endl;

	}
	return 0;
}