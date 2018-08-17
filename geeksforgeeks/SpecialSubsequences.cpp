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
std::vector<string> v;
std::vector<char> in;
ll fact[11];
ll init(int i){
	if(i<=0){
		fact[0]=1;
		return fact[0];
	}
	return fact[i]=i*init(i-1);	
}
void recur(int depth,int size,string str,int start){

	

	if (depth>=size/2)
	{
		return;
	}
	for (int i = start+1; i < size; ++i)
	{
		
		if (toupper(in[i])==toupper(in[start]))
		{
			continue;
		}
		v.push_back(str+in[i]);
		recur(depth+1,size,str+in[i],i);
	}
	return;
}
int main()
{
	freopen("../input.txt","r",stdin);
	init(10);
	
	// freopen("../output.txt","w",stdout);
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		in.clear();
		v.clear();
		for (int i = 0; i < n; ++i)
		{
			in.push_back(toupper(s[i]));
			in.push_back(s[i]);
		}
		
		for (int x = 0; x < in.size(); ++x)
		{
			v.push_back(string(1,in[x]));
			recur(1,2*n,string(1,in[x]),x);
			// v.push_back("-1"+string(1,in[x]));
		}
		cout<<v.size()<<"\n";
		// sort(v.begin(),v.end());
		for (int i = 0; i < v.size(); ++i)
		{

			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}