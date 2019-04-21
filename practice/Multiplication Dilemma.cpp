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

int T;
ll a,b;
string x,y;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	freopen("../input.txt","r",stdin);

	cin>>T;
	while(T--){
		cin>>x>>y;
		a=stoi(x),b=stoi(y);
		
		if((x.size()==1 && y.size()==1) || (stoi(x.substr(1,x.size()-1))==0 && stoi(y.substr(1,y.size()-1))==0)){
			cout<<a<<" x "<<b;
		}
		else if(x.size()==1 || stoi(x.substr(1,x.size()-1))==0){
			int s=1;
			if(a<0) s*=-1;
			if(b<0) s*=-1;
			a=abs(a),b=abs(b);
		}
		else if(y.size()==1 || stoi(y.substr(1,y.size()-1))==0){

		}
		else{
			
		}

		cout<<"\n";
	}
	return 0;
}