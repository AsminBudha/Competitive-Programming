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



int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	int a[n],b[n];
	map<int,int> m;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	
	int l=0;
	for (int i = 0; i < n; ++i)
	{
		if(m[b[i]]){
			int c=0;
			while(a[l]!=b[i]){
				m[a[l]]--;
				l++;
				c++;
			}
			m[a[l]]--;
			l++;

			cout<<c+1<<" ";
		}
		else{
			cout<<0<<" ";
		}
	}

	return 0;
}