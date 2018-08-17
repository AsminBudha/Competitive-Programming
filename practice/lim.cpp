#include <bits/stdc++.h>
#define MAX 10000000
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
long initialise(long n)
{
		if(n == 1){
   			return 1;
		}
		if(cycle[n])
			return cycle[n];
		if(n % 2){
    		cycle[n] = 1 + initialise(3 * n + 1);
		}
		else
			cycle[n] = 1 + initialise(n / 2);
		return cycle[n];
}

int main()
{
	freopen("../input.txt","r",stdin);
	// freopen("../input.txt","w",stdout);
	// srand(time(0));
	// for (int i = 0; i < 10; ++i)
	// {
	// 	int a=rand()%100000+1;
	// 	int b=rand()%100000+a;
	// 	cout<< a << " " << b << "\n";
	// }
    cin.sync_with_stdio(false);
	cin.tie(0);

	for(int i = 1; i < 10000; i++){
  		initialise(i);
 // cout << i << " " << cycle[i] << " ";
  		vect[i] = cycle[i];
	}




	long a, b;
	while(cin >> a >> b){
	   cout << a <<" " << b << " " << *max_element(vect.begin() + a, vect.begin() + b ) << "\n";

	}

	return 0;
}