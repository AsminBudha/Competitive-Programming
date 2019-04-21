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
string s;
map<string,double> ans;
map<char,char> pos;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pos['d']='L';
    pos['f']='L';
    pos['j']='R';
    pos['k']='R';

	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		ans.clear();
		double total=0;
		while(n--){
			cin>>s;
			if(ans[s]){
				total+=ans[s]/2;
			}
			else{
				char last=pos[s[0]];
				ans[s]=2;
				for (int i = 1; i < s.size(); ++i)
				{
					if(last==pos[s[i]]){
						ans[s]+=4;
					}
					else
						ans[s]+=2;
					last=pos[s[i]];
				}
				total+=ans[s];
			}

		}
		cout<<(int)total<<endl;
	}
	
	return 0;
}