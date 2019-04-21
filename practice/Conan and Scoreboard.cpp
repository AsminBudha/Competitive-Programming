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

int T,n,m,k,x,y,z;
string t;
vector<int> st(string s){
	std::vector<int> time;
	// cout<<s.substr(0,3)<<" "<<s.substr(4,2)<<endl;
	time.push_back(stoi(s.substr(0,3)));
	time.push_back(stoi(s.substr(4,2)));
	return time;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// freopen("../input.txt","r",stdin);
	
	cin>>T;

	while(T--){
		cin>>n>>m>>k;

		pair<int,int> bestprobT[n+1];
		fill(bestprobT,bestprobT+n+1,make_pair(300,60));

		int bestStdProb[n+1];
		fill(bestStdProb,bestStdProb+n+1,-1);

		int a=-1,b=-1;
		pii pa,pb;
		pa={300,60},pb={-1,-1};

		map<int,pii> c[m+1];
		for(int i=0;i<k;i++){
			cin>>x>>y>>z>>t;
			// int time[2];
			int hh=(stoi(t.substr(0,3)));
			int mm=(stoi(t.substr(4,2)));
			
			map<int,pii>::iterator it=c[y].find(x);
			pii pcount;
			if(it!=c[y].end()){
				// cout<< it;
				pcount=(*it).second;
			}
			else{
				pcount={0,0};
			}

			if(z){
				c[y][x]={pcount.first+1,pcount.second};
				if(make_pair(hh,mm)<pa){
					pa={hh,mm};
					a=y;
				}
				if(make_pair(hh,mm)>pb){
					pb={hh,mm};
					b=y;
				}
				if(bestStdProb[x]==-1){
					bestStdProb[x]=y;
					bestprobT[x]={hh,mm};
				}
				else{
					if(bestprobT[x].first>hh){
						bestStdProb[x]=y;
						bestprobT[x]={hh,mm};
					}
					else if(bestprobT[x].first==hh && bestprobT[x].second>mm){
						bestStdProb[x]=y;
						bestprobT[x]={hh,mm};
					}
				}
			}
			else{
				c[y][x]={pcount.first,pcount.second+1};
			}
		}
		for(int i=1;i<=n;i++){
			cout<<bestStdProb[i]<<" ";

		}
		int cans=-1,cbest=-1,dans=-1,dbest=-1;
		for(int i=1;i<=m;i++){
			int count=0;

			for(auto it:c[i]){
				int pid=it.first,pos=it.second.first,neg=it.second.second;
				if(pos==1 && neg==0){
					count++;
				}
				if(pos==1 && neg>dbest){
					dbest=neg;
					dans=i;
				}
			}
			if(count>cbest){
				cbest=count;
				cans=i;
			}
		}
		cout<<"\n";
		cout<<a<<" "<<b<<" "<<cans<<" "<<dans;
		cout<<"\n";
	}
	return 0;
}