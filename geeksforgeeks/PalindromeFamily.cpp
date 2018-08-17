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
int n;
ll arr[100001];
ll temp[100001];
bool check(string s,int l,int r, int inc){
	while(l<r){
			if (s[l]!=s[r])
			{
				return false;
			}
			l+=inc;
			r-=inc;
		}
	return true;
}
int main()
{
	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		// int l=0,r=s.size()-1;
		// bool alien=!check(s,l,r,1);
		
		// if(alien){
		// 	cout<<"ALIEN";
		// }
		// else{
			
			int l=0;
			int n=s.size();
			int r= (n%2==1)?n-1:n-2;
			bool odd=check(s,l,r,2);

			l=1;
			r=(n%2==0)?n-1:n-2;
			bool even=check(s,l,r,2);
			if(!odd && !even){
				cout<<"ALIEN";
			}
			else if (odd && even)
			{
				cout<<"PARENT";
			}
			else{
				cout<< ((odd)?"ODD":"EVEN");
			}

		// }
		cout<<"\n";
	}
	return 0;
}