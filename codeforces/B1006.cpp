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
bool comp(pii x,pii y){
	return x.first>y.first;
}
int main()
{
	// freopen("../input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	int arr[n];
	std::vector< pair<int,int> > v;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		v.push_back(make_pair(arr[i],i));
	}
	sort(v.begin(),v.end(),comp);
	ll sum=0;
	std::vector<int> pos;
	for (int i = 0; i < k; ++i)
	{
		sum+=v[i].first;
		pos.push_back(v[i].second);
	}
	cout<<sum<<endl;
	sort(pos.begin(),pos.end());
	int last=0;
	for (int i = 0; i < k-1; ++i)
	{
		cout<<pos[i]-last+1<<" ";
		
		last=pos[i]+1;
	}
	cout<<n-last;
	return 0;
}