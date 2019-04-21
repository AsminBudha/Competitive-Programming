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

int t,n,x,y,d,m;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n>>x>>y;
		map<int,pii> mv;
		for(int i=1;i<=n;i++){
			cin>>d>>m;
			map<int,pii>::iterator it= mv.find(d);
			if(it!=mv.end()){
				if(mv[d].first<m){
					mv[d]={m,i};
				}
			}
			else{
				mv[d]={m,i};
			}
			
		}
		int pos=-1;
		for(auto it:mv){
			// cout<<it.first<<"->"<<it.second.first<<","<<it.second.second<<endl;
			if(it.first>x){
				break;
			}
			if(it.second.first<y){
				continue;
			}
			pos=it.second.second;
			break;
		}
		cout<<pos<<"\n";
	}
	return 0;
}