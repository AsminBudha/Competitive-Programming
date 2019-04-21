#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

//typedefs
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<long, long> pii;
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
long parent[100001];
long rankk[100001];
long num[100001];
long grades[100001][3];
long maxg[3];
int find(int i){
	if (parent[i]!=i)
	{
		parent[i]=find(parent[i]);

	}
	return parent[i];
}
void join( long x, long y){
	long xroot=find(x),yroot=find(y);
	// cout<<x<<"->"<<xroot<<" "<<y<<"->"<<yroot<<" ";
	for (int i = 0; i < 3; ++i)
	{
		if(grades[yroot][i]+grades[xroot][i]>maxg[i]) return;
	}
	if (xroot==yroot)
	{
		return;
	}
	if (rankk[xroot]<rankk[yroot])
	{
		// cout<<yroot<<"->"<<xroot<<"\n";
		
			
			parent[xroot]=yroot;
			num[yroot]+=num[xroot];
			// grades[yroot][g2]+=(!grades[yroot][g2]?1:0);
			for (int i = 0; i < 3; ++i)
			{
				grades[yroot][i]+=grades[xroot][i];
			}
		
	}
	else if(rankk[yroot]<rankk[xroot]){
		// cout<<xroot<<"->"<<yroot<<"\n";
			
			parent[yroot]=xroot;
			num[xroot]+=num[yroot];
			// grades[xroot][g1]+=(!grades[xroot][g1]?1:0);
		for (int i = 0; i < 3; ++i)
			{
				grades[xroot][i]+=grades[yroot][i];
			}
		
	}
	else{
		// cout<<xroot<<"->"<<yroot<<"\n";
			
			parent[yroot]=xroot;
			rankk[xroot]++;
			num[xroot]+=num[yroot];
			for (int i = 0; i < 3; ++i)
			{
				grades[xroot][i]+=grades[yroot][i];
			}
		
	}
}
int main()
{
	// freopen("../input.txt","r",stdin);
	long n,m,a,b;
	cin>>n>>m>>a>>b>>maxg[0]>>maxg[1]>>maxg[2];

	//init DSU
	for (long i = 0; i < n; ++i)
	{
		parent[i]=i;
		rankk[i]=0;
		num[i]=1;
	}

	unordered_map<string, pii > person;
	unordered_map<long, string > intoper;
	
	for (long i = 0; i < n; ++i)
	{
		string x;
		int grade;
		cin>>x>>grade;
		person[x]=make_pair(i,grade);
		grades[i][grade]=1;
		intoper[i]=x;
	}
	for (long i = 0; i < m; ++i)
	{
		string x,y;
		cin>>x>>y;
		long p=person[x].first,q=person[y].first,g1=person[x].second,g2=person[y].second;
		if (num[find(p)]+num[find(q)]<=b)
		{
			join(p,q);
		}

	}
	std::vector<string> v;
	long mx=0;
	for (long i = 0; i < n; ++i)
	{
		mx=max(num[i],mx);
	}
	if (mx<a)
	{
		cout<<"no groups";
		return 0;
	}
	for (long i = 0; i < n; ++i)
	{
		// cout<<i<<"->";
		// cout<<"num="<<num[i]<<" ";
		if (num[i]==mx)
		{

			int count=0;
			for (long j = 0; j < n; ++j)
			{
				if (find(j)==i)
				{
					// cout<<j<<" ";
					count++;
					v.push_back(intoper[j]);		
				}
				if(count>=b) break;
			}
		}
			// cout<<endl;
	}
	sort(v.begin(),v.end());
	for (long i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<"\n";
	}
	return 0;
}