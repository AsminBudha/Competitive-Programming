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
int n;
ll arr[100001];
ll temp[100001];
int main()
{
	// freopen("../input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	std::map<ll, int> mp;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		mp[x]++;
	}
	
	while(k--){
		ll x;
		cin>>x;
		
			int count=0;
			bool found=false;
			for(auto it=mp.rbegin();it!=mp.rend();it++){
				ll c=it->first;
				int num=it->second;
				if(x>=c){
					int q=x/c;
					if(q<=num){
						x-=q*c;
						count+=q;
					}
					else{
						x-=num*c;
						count+=num;
					}
					if (x<=0)
					{
						found=true;
						break;
					}
				}
			}
			if (x==0)
			{
				cout<<count;
			}
			else{
				cout<<-1;
			}
		
		cout<<endl;
	}
	return 0;
}