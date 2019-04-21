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

int t,d,m,y,qy;

bool  isLeapYear(int  year)
{
	if (year %  400  ==  0)  return  true;
	else  if(year  %  100  ==  0)  return  false;

	else  if(year  %  4  ==  0)  return  true;

	else  return  false;

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	freopen("../input.txt","r",stdin);
	
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		cout<<"Case "<<cs<<": ";

		cin>>d>>m>>y>>qy;
		int ans=0;
		if(d==29 && m==2){
			y++;
			while(!isLeapYear(y)){
				y++;
			}
			for (int i = y; i <=qy; i+=4)
			{
				if(isLeapYear(i)){
					ans++;
				}
			}
		}
		else{
			ans+=qy-y;
		}
		cout<<ans<<endl;
	}
	return 0;
}