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

int T,n,m,k,x;
char c;
char a[10007];
bool check[10007];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);

	cin>>T;
	
	while(T--){
		cin>>n>>m>>k;

		bool init=false;
		for(int i=0;i<n;i++){
			cin>>a[i];
			check[i]=init|a[i]=='S';
			init=check[i];
			// cout<<check[i]<<" ";
		}
		int ans=0,last=k;
		while(m--){
			cin>>c;
			if(c=='A'){
				last=n;
			}
			else{
				cin>>x;
				if(a[x-1]=='S' && x<=last){
					// cout<<x<<" "<<last<<endl;
					ans++;
				}
				last=max(last,x);
			}
			
		}
		cout<<ans;
		cout<<"\n";
	}
	return 0;
}