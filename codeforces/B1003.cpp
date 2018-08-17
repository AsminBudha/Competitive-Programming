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
int main()
{
	// freopen("../input.txt","r",stdin);
	int a,b,x;
	cin>>a>>b>>x;
	char ans[a+b];
	int n=a+b;
	int pos=0;
	
	
	bool isOn= (a>b)?false:true;
	ans[pos++]=isOn? '1':'0';
	if (isOn)
		{
			b--;
		}
		else{
			a--;
		}
	isOn=!isOn;
	int count=0;
	while(count<x-1){
		ans[pos]= isOn? '1':'0';
		pos++;
		if (isOn)
		{
			b--;
		}
		else{
			a--;
		}
		isOn=!isOn;
		count++;
	}
	int temp= isOn? a:b;
	char c= isOn? '0':'1';
	while(temp-->0){
		ans[pos++]=c;
	}
	temp= isOn? b:a;
	c=	isOn? '1':'0';
	while(temp-->0){
		ans[pos++]=c;
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i];
	}
	return 0;
}