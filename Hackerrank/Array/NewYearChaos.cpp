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

int t,n;
int arr[(int)1e5];

int main()
{
	// freopen("../../input.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		int temp[n];
		for(int i=0;i<n;i++){
			temp[i]=i+1;
			cin>>arr[i];
		}
		bool isChaotic=false;
		int ans=0;
		for(int i=0;i<n;i++){
			int x=temp[i];
			int j=i;
			int count=0;
			while(j+1<n && arr[i]!=x){
				// cout<<x<<" ";
				int y=temp[j+1];
				temp[j+1]=x;
				x=y;
				j++;
				count++;
			}
			if(count>2){
				isChaotic=true;
				break;
			}
			temp[i]=arr[i];
			
			ans+=count;
		}
		if(isChaotic){
			cout<<"Too chaotic";
		}
		else cout<<ans;
		cout<<endl;
		
	}

	return 0;
}