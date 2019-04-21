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

int main()
{
	char c[13];
	vector<ll> fact;
	fact.push_back(1);
	c[0]='a';
	bool unvisited[13];
	for(int i=1;i<13;i++){
		fact.push_back(i*fact[i-1]);
		// cout<<fact[i]<<" ";
		c[i]='a'+i;
	}
	// cout<<endl;
	freopen("../input.txt","r",stdin);
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		

		int l=0,r=12;
		while(l<=r){
			int mid=l+(r-l)/2;
			// cout<<mid<<" ";
			if(n==fact[mid]){
				l=mid;
				break;
			}
			else if(fact[mid]<n){
				l=mid+1;
			}
			else{
				r=mid-1;
			}
		}
		// cout<<endl;
		// cout<<l<<" "<<r<<endl;
		int last=13-l;
		for(int i=0;i<last;i++){
			cout<<c[i];
			unvisited[i]=false;
		}
		fill(unvisited+last,unvisited+13,true);
		
		for (int i = 0; i < l; ++i)
		{
			int x=fact[l-1];
			int y=ceil((double)n/x);
			// cout<<y<<" ";
			// cout<<c[last+y-1];
			if(y==0){
				for(int j=13-l;j<13;j++){
					if(unvisited[j]){
						cout<<c[j];
					}
				}
				break;
			}
			else if(unvisited[last+y-1]){
				cout<<c[last+y-1];
				unvisited[last+y-1]=false;
			}
			else{
				// for(int j=last+y;j>=0;j--){
				// 	if(unvisited[j]){
				// 		cout<<c[j];
				// 		unvisited[j]=false;   
				// 		break;
				// 	}
				// }
				// cout<<"*";
			}
			// // cout<<n<<" "<<y<<endl;
			
			n=(n-1)%y;
			last=last+1;
		}
		cout<<endl;
	}
	return 0;
}