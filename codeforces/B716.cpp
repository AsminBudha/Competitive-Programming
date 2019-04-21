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

string s;
int main()
{
	freopen("../input.txt","r",stdin);
	cin>>s;
	if(s.size()<26){
		cout<<-1;
		return 0;
	}
	map<char,int> mp;
	int count=0;
	std::vector<char> v;
	for(int i=0;i<s.size();i++){
		if(s[i]=='?'){
			count++;
			continue;
		} 
		mp[s[i]]++;
	}
	if(cout+mp.size()<26){
		cout<<-1;
	}
	else{
		char c='A';
		for(auto it:mp){
			if(it.first==c){
				c++;
			}
			else{
				while(c<it.first){
					v.push_back(c);
					c++;
				}
				c++;
			}
		}
		int pos=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='?'){
				
			}
			else{
				cout<<s[i];
			}
		}
	}
	return 0;
}