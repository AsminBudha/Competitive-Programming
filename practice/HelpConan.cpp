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

int t,n,m,k,x,y,z;
ll dist[16];
int parent[16],r[16];

	void makeSet() 
    { 
        for (int i=0; i<=n; i++) 
        { 
            // Initially, all elements are in 
            // their own set. 
            parent[i] = i;
            r[i]=0; 
        } 
    } 
  
    // Returns representative of x's set 
    int find(int x) 
    { 
        if (parent[x]!=x) 
        { 
            
            parent[x] = find(parent[x]); 
  
        } 
  
        return parent[x]; 
    } 
  
    void merge(int x, int y) 
    { 
        int xRoot = find(x), yRoot = find(y); 
  
        if (xRoot == yRoot) 
            return; 
  
         // If x's rank is less than y's rank 
        if (r[xRoot] < r[yRoot]) 
  
            // Then move x under y  so that depth 
            // of tree remains less 
            parent[xRoot] = yRoot; 
  
        // Else if y's rank is less than x's rank 
        else if (r[yRoot] < r[xRoot]) 
  
            // Then move y under x so that depth of 
            // tree remains less 
            parent[yRoot] = xRoot; 
  
        else // if ranks are the same 
        { 
            // Then move y under x (doesn't matter 
            // which one goes where) 
            parent[yRoot] = xRoot; 
  
            // And increment the the result tree's 
            // rank by 1 
            r[xRoot] = r[xRoot] + 1; 
        } 
    }
    bool found;

ll dfss(int u,vector<pair<int,ll> > result[],map<int,int> mp,ll total){
	

	for(auto it:result[u]){
		ll tot=dfss(it.first,result,mp,total);
		// cout<<it.second<<" ";
		if(found) total+=it.second;
		// cout<<found;
	}
	if(mp[u]){
		found=true;
	}
	return total;
}
ll dfs(int u,vector<pair<int,ll> > result[],map<int,int> mp){
	ll ans=0;
	// cout<<u<<"->";
	for(auto it:result[u]){
		found=false;
		// cout<<it.first<<"-\n";
		ans+=dfss(it.first,result,mp,0);
		// cout<<ans<<endl;
		ans+=it.second;
		
	}
	return ans;
} 
ll KruskalMST(map<int,vector<pii> > edges,map<int,int> mp) 
{ 
    std::vector<pair<int,ll> > result[n+1];// Tnis will store the resultant MST 
    int e = 0;  // An index variable, used for result[] 
    int i = 0;  // An index variable, used for sorted edges 

    makeSet();
  	for(auto it:edges){

  		int w=it.first;
  		for(auto ij:edges[w]){
  			pii p=ij;
	  		int x=find(p.first),y=find(p.second);
	  		if (x != y) 
	        { 
	            merge(x,y);
	            result[p.first].push_back({p.second,w});
	        } 
  		}
  		
  	}
    // for(int i=1;i<=n;i++){
    // 	// cout<<i<<"->";
    // 	for(auto it:result[i]){
    // 		cout<<i<<"->"<<it.first<<","<<it.second<<endl;
    // 	}
    // }
    map<int,int>::iterator u=mp.begin();
    return dfs((*u).first,result,mp);
} 

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>t;

	while(t--){
		cin>>n>>m>>k;
		std::vector<pii> v[n+1];

		map<int,vector<pii> > edges;

		map<int,int> mp;
		for(int i=0;i<m;i++){
			cin>>x>>y>>z;
			v[x].push_back({y,z});
			v[y].push_back({x,z});
			edges[z].push_back({x,y});
		}
		for(int i=0;i<k;i++){
			cin>>x;
			mp[x]++;
		}

		cout<<KruskalMST(edges,mp);

		// map<int,int>::iterator it=mp.begin();
		// search((*it).first,v);
		// ll ans=0;
		// // cout<<dist[1];
		// // for(auto i:mp){
		// // 	// cout<<i.first<<"-=>";
		// // 	// cout<<dist[i.first]<<",";
		// // 	ans=max(ans,dist[i.first]);
		// // }
		// cout<<ans;
		cout<<"\n";
	}
	return 0;
}