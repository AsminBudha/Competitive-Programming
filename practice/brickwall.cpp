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

ll sr,sc,dr,dc;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	while(true){
		cin>>sr>>sc>>dr>>dc;
		if(sr==0 && sc==0 && dr==0 && dc==0){
			break;
		}

		ll ans=0;
		if(sr>dr){
			swap(sr,dr);
			swap(sc,dc);
		}
		// cout<<sr<<" "<<sc<<" "<<dr<<" "<<dc<<" ";
		if(sr==dr){
			ans=abs(dc-sc);
			// cout<<"A";
			cout<<ans<<endl;
			continue;
		}
		ll r=abs(sr-dr),c=abs(sc-dc);
		if(sr%2!=sc%2){
			if(dc>=sc && sc+1>1e9){
				sc++;
				ans++;
			}
			else{
				sc--;
				ans++;
			}
		}
		
		if(sc==dc){
			ans+=r+c;
			// cout<<"B";
			cout<<(ll)(ans+2*(r/2))<<endl;
			continue;
		}
		if(c>=r-1){
			ans+=r+c;
			// cout<<"C";
			cout<<ans<<endl;
		}
		else{
			// cout<<ans;
			if(sr%2==dr%2){
				ans+=(r-1)*2+1;
			}
			else{
				ans+=2*r;
			}
			// cout<<"D";
			cout<<ans<<endl;
		}
	}
	
	return 0;
}