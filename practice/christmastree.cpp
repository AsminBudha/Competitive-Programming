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

int t,n,k,u,v;

struct comp
{
	int lvl,node,child;
	bool operator < (const comp& b) const{
		if(lvl==b.lvl){
			return child<b.child;
			
		}
		return lvl>b.lvl;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	freopen("../input.txt","r",stdin);
	
	cin>>t;
	for(int cs=1;cs<=t;cs++){
		cout<<"Case "<<cs<<": ";

		cin>>n>>k;
		std::vector<int> tree[n+1];
		for (int i = 0; i < n-1; ++i)
		{
			cin>>u>>v;
			tree[u].push_back(v);
		}
		map<ll,ll> ans;
		priority_queue <comp> pq; 
		// cout<<tree[1].size()<<endl;
		pq.push(comp{0,1,(int)tree[1].size()});
		ans[0]=1;
		while(!pq.empty()){
			comp x=pq.top();
			pq.pop();
			if(x.child>=k){
				ans[x.lvl+1]+=k;
				for(auto it:tree[x.node]){
					pq.push(comp{x.lvl+1,it,(int)tree[it].size()});
				}
			}
			
		}
		ll count=0;
		for(auto it:ans){
			// cout<<it.first<<"->"<<it.second<<endl;

			count+=min((ll)pow(k,it.first),it.second);
			// cout<<count<<endl;
		}
		cout<<count<<endl;
		
	}
	return 0;
}