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
map<long, long> cycle;
vector<long> vect(10001);

int main()
{
	map<string,int> mp;
	mp["byte"]=0;
	mp["kb"]=1;
	mp["mb"]=2;
	mp["gb"]=3;
	mp["pb"]=4;
	freopen("../input.txt","r",stdin);
	int t;
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		cout<<"Case "<<cs<<": ";
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<s1.size();i++)
			s1[i]=tolower(s1[i]);

		for(int i=0;i<s1.size();i++)
			s2[i]=tolower(s2[i]);
		// s2=tolower(s2);
		double ans=0;
		if(s1!="bit" & s2!="bit"){
			int times=abs(mp[s1]-mp[s2]);
			ll div=pow(1024,times);
			if(mp[s2]<mp[s1]){
				ans=(double)n*div;
			}
			else{
				ans=(double)n/div;
			}
		}
		else if(s1=="bit" && s2=="bit"){
			ans=(double)n;
		}
		else if(s1==s2){
			ans=(double)n;
		}
		else if(s1=="bit"){
			int times=abs(mp["byte"]-mp[s2]);
			ll div=pow(1024,times);
			if(mp[s2]<mp["byte"]){
				ans=(double)n*div*8;
			}
			else{
				ans=(double)n/(div*8);
			}
		}
		else if(s2=="bit"){
			int times=abs(mp["byte"]-mp[s1]);
			ll div=pow(1024,times);
			if(mp[s1]<mp["byte"]){
				ans=(double)n/(div*8);
			}
			else{
				ans=(double)n*(div*8);
			}
		}
		printf("%.15lf\n",ans);
	}
	return 0;
}