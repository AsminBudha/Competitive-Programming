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
	freopen("../input.txt","r",stdin);
	freopen("tourist.txt","w",stdout);
	freopen("1.txt","w",stderr);
	
	int t;
	cin>>t;
	int cas=1;
	while(t--){
		cout<<"Case #"<<cas<<": ";
		cas++;
		int n,k;
		ll v;
		cin>>n>>k>>v;
		string arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		
		int rem=v/(n*k);
		v-=rem;
		int pos=0;
		
		pos=(pos+(k*(v-1)))%n;
			
		cerr<<pos<<endl;
		map<int,string> ans;
		for (int i = 0; i < k; ++i)
		{
			ans[pos]=arr[pos];
			pos=(pos+1)%n;
		}
		for(auto it:ans){
			cout<<(it.second)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}