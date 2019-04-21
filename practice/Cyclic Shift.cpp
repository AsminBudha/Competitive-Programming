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

int T,n;
string a,b;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);

	cin>>T;
	std::vector<char> v1,v2;
	while(T--){
		cin>>n>>a>>b;

		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				v1.push_back(a[i]);
				v2.push_back(b[i]);
			}
		}
		if(v1.size()==0){
			cout<<"YES\n";
			continue;
		}
		bool possible=true;
		for(int i=1;i<v1.size();i++){
			if(v1[i]!=v2[i-1]){
				possible=false;
				break;
			}
		}
		possible=possible && v1[0]==v2[v2.size()-1];
		if(!possible){
			possible=true;
			for(int i=1;i<v2.size();i++){
				if(v2[i]!=v1[i-1]){
					possible=false;
					break;
				}
			}
			possible=possible && v2[0]==v1[v1.size()-1];
		}
		if(possible){
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<"\n";

		v1.clear();
		v2.clear();
	}
	return 0;
}