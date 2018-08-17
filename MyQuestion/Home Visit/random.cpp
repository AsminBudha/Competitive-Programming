#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("input/input05.txt","w",stdout);
	srand (time(NULL));
	ll n=rand()%1000001;
	cout<<n<<endl;
	for(ll i=0;i<n;i++){
		cout<<rand()%1000001<<" ";
	}
}