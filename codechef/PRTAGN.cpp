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

const int ODD=1;
const int EVEN=2;

ll t,q,x;
map<ll,int> store;

int oddNumberOfOnes(ull num)
{
    ll n=0;
    while(num > 0) {
        n ^= num;
        num = num >> 1;
    }
    return n & 1;
}

int main()
{
	// cout<<oddNumberOfOnes(3);
	// freopen("../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>q;
		map<ll,int> o;
		map<ll,int> e;
		while(q--){
			cin>>x;
			bool found=false;
			if(store[x]==ODD || oddNumberOfOnes(x)){
				store[x]=ODD;
				if(o[x]){
					found=true;
				}
				o[x]=1;
			}
			else{
				store[x]=EVEN;
				if(e[x]){
					found=true;
				}
				e[x]=1;
			}
			if(found){
				cout<<e.size()<<" "<<o.size()<<endl;
				continue;
			}
			for (auto it=o.begin(); it!=o.end(); ++it){
			    ll a=it->first;
			    if(a==x){
			    	continue;
			    }
			    ll b=a^x;
			    if(store[b]==ODD || oddNumberOfOnes(b)){
			    	o[b]=1;
			    	store[b]=ODD;
			    }
			    else{
			    	e[b]=1;
			    	store[b]=EVEN;
			    }
			}
			for (auto it=e.begin(); it!=e.end(); ++it){
			    ll a=it->first;
			    if(a==x){
			    	continue;
			    }
			    ll b=a^x;
			    if(store[b]==ODD || oddNumberOfOnes(b)){
			    	o[b]=1;
			    	store[b]=ODD;
			    }
			    else{
			    	e[b]=1;
			    	store[b]=EVEN;
			    }
			}

			// if(oddNumberOfOnes(x)){
		 //    	o[x]=1;
		 //    }
		 //    else{
		 //    	e[x]=1;
		 //    }
			cout<<e.size()<<" "<<o.size()<<endl;
		}
	}
	return 0;
}