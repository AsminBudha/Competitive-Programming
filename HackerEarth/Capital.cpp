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

ll n,k;
std::vector<ll> v;
ll x;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	freopen("../input.txt","r",stdin);
	
	cin>>n>>k;
	ll sum=0,minVal=LLONG_MAX;
	std::vector<ll> freq;
	std::map<ll, ll> mapNumToIndex;
	for(ll i=0;i<n;i++){
		cin>>x;
		minVal=min(minVal,x);
		v.push_back(x);
		if(mapNumToIndex.find(x)==mapNumToIndex.end()){
			mapNumToIndex[x]=i;
		}
		sum+=x;
	}
	// if(n==1){
	// 	cout<<1<<" "<<0;
	// 	return 0;
	// }

	sort(v.begin(),v.end());
	ll temp=0;
	for(ll i=0;i<n;i++){
		temp+=v[i];
		freq.push_back(temp);
		
	}
	std::vector<ll> dist;
	for(ll i=0;i<n;i++){
		x=(i+1)*v[i]-freq[i]+(sum-freq[i])-v[i]*(n-1-i);
		
		dist.push_back((x-k));
	}
	ll m=LLONG_MAX,index=LLONG_MAX;
	for(ll i=0;i<n;i++){
		cout<<v[i]<<" "<<dist[i]<<endl;
		if(dist[i]<0){
			ll a=abs(dist[i]);
			dist[i]=a%2;
		}
		if(dist[i]<m){
			m=dist[i];
			index=i;
		}
		else if(dist[i]==m  && mapNumToIndex[v[i]]<index){
			m=dist[i];
			index=i;	
		}
	}
	
	
	cout<<index+1<<" "<<m;
	return 0;
}