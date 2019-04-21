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

int t,a,b,c,d;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>a>>b>>c>>d;
		if(a+c>b+d){
			cout<<1;
		}
		else if(b+d>c+a){
			cout<<2;
		}
		else{
			if(c>b){
				cout<<1;
			}
			else if(b>c){
				cout<<2;
			}
			else cout<<-1;
		}
		cout<<"\n";
	}
	return 0;
}