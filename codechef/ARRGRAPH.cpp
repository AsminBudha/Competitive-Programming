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

int t,n,arr[51],parent[51],power[51];
int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

void make(int n){
	for(int i=0;i<n;i++){
		parent[i]=i;
		power[i]=0;
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
  
    if (power[xRoot] < power[yRoot]) 
  
        parent[xRoot] = yRoot; 
  
    else if (power[yRoot] < power[xRoot]) 
  
        parent[yRoot] = xRoot; 
  
    else
    { 
        parent[yRoot] = xRoot; 
  
        power[xRoot] = power[xRoot] + 1; 
    } 
} 


int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

bool isCoPrime(int a,int b){
	int g=gcd(a,b);

	return g==1;
}
map<int,int> primefacts(map<int, int> m,int n){
	
	for(int i=0;i<15 && primes[i]<=n;i++){
		if(n%primes[i]==0){
			m[primes[i]]=1;
		}
	}
	return m;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		make(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if(isCoPrime(arr[i],arr[j])){
					merge(i,j);
				}
			}
			
		}
		map<int,vector<int> > related;
		for(int i=0;i<n;i++){
			related[find(i)].push_back(i);
		}
		int maxC=0,pos=-1;
		for (auto it:related)
		{

			if(maxC<it.second.size()){
				maxC=it.second.size();
				pos=it.first;
			}
		}

		std::vector<int> v=related[pos];

		// map<int,int> m;
		// for(auto it:v){
		// 	m=primefacts(m,arr[it]);
		// }
		int x=0;
		for(auto it:related){
			if(it.first==pos)
				continue;
			std::vector<int> temp=related[it.first];
			for(auto itt:temp){
				arr[itt]=arr[v[x%maxC]]+1;
				x++;
				// for(int k=0;k<15;k++){
				// 	if(!m[primes[k]]){
				// 		arr[itt]=primes[k];
				// 		m[primes[k]]=1;
				// 		break;
				// 	}
				// }
			}
		}
		
		int changeNum=n-maxC;
		cout<<changeNum<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}