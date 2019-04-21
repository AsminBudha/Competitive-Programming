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

int N,S,U,Q;

map<int,vector<int> > seq;
int arr[50007];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	freopen("../input.txt","r",stdin);
	cin>>N>>S>>U>>Q;
	S++;
	int s,x;
	for(int i=1;i<=S;i++){
		cin>>s;
		while(s--){
			cin>>x;
			seq[i].push_back(x);
		}
	}
	std::vector< tuple<int,int,int> > updates;
	int a,b,c;
	while(U--){
		cin>>a>>b>>c;
		updates.push_back({a,b,c});
		arr[a]+=c;
		arr[b+1]-=c;
	}
	ll cal=0;
	for(int i=1;i<=N;i++){
		cal+=arr[i];
		arr[i]=cal;
	}

	int I,X;
	while(Q--){
		cin>>I>>X;
		ll sum=0;
		for(auto it:seq[I]){
			sum+=arr[it];
		}
		if(sum<X){
			cout<<-1<<"\n";
		}
		else{
			int a[N+1];
			memset(a,0,a+N+1);
			
			cout<<"Y\n";
		}
	}
	return 0;
}

