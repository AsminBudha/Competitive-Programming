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

int main()
{
	map<string,char> play;
	play["Dee"]='0';
	play["Dum"]='1';
	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		string pile[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>pile[i];
		}
		while(true){
			bool found=false;
			for (int i = 0; i < n; ++i)
			{
				if(pile[i]!="" && play[s]==pile[i][0]){
					int pos=1;
					while(pile[i][pos]!=play[s]){
						pos++;
					}
					// cout<<pos<<" "<<pile[i]<<" ";
					if(pos>pile[i].size()){
						pile[i]="";
					}
					else{
						pile[i]=pile[i].substr(pos,pile[i].size()-pos);
					}
					
					
					// cout<<pile[i]<<endl;
					found=1;
					break;
				}
			}

			if(found){
				if(s=="Dee"){
					s="Dum";
				}
				else{
					s="Dee";
				}
			}
			else
				break;
			
		}
		cout<<s<<endl;
	}
	return 0;
}