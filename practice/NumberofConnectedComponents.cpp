

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

int T,n;
int a[100007],r[1000007],parent[1000007];

vector<int> primeFactors(int n) 
{ 
	std::vector<int> v; 
    if(n%2==0) v.push_back(2);
    while (n%2 == 0) 
    { 
        n = n/2; 
    } 
  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        if(n%i==0) v.push_back(i);
        while (n%i == 0) 
        { 
            n = n/i; 
        } 
    } 
  
    if (n > 2) 
        v.push_back(n);
    return v; 
} 


void makeset(){
	for(int i=0;i<1000007;i++){
		r[i]=0;
		parent[i]=i;
	}
}
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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	
	cin>>T;
	for(int cs=1;cs<=T;cs++){
		cout<<"Case "<<cs<<": ";
		cin>>n;
		int one=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1) one++;
		}
		makeset();
		for(int i=0;i<n;i++){
			if(a[i]!=1){
				vector<int> v=primeFactors(a[i]);
				for(auto it:v){
					merge(it,a[i]);
				}
			}
		}
		map<int,int> ans;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]!=1)
				ans[find(a[i])]++;
		}
		cout<<ans.size()+one;
		cout<<"\n";
	}

	
	return 0;
}