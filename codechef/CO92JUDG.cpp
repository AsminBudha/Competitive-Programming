#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	int t;
	cin>>t;
	set<int> st;
	
	while(t-->0){
		int n;
		cin>>n;
		ll alice=0;
		ll bob=0;
		ll x;
		ll arem=-1;
		ll brem=-1;
		for(int i=0;i<n;i++){
			cin>>x;
			alice+=x;
			if(x>arem) arem=x;
		}
		for(int i=0;i<n;i++){
			cin>>x;
			bob+=x;
			if (x>brem)
			{
				brem=x;
			}
		}
		alice-=arem;bob-=brem;
		cout<<(alice==bob?"Draw":(alice<bob?"Alice":"Bob"))<<"\n";
	}
	return 0;
}