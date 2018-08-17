#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("input/input05.txt","w",stdout);
	srand (time(NULL));
	ll n=rand()%1000001+2;
	cout<<n<<endl;
	ll arr[n];
	for(ll i=0;i<n;i++){
		arr[i]=rand()%100000001;
	}
	sort(arr,arr+n);
	ll pos=rand()%n;
	for(ll i=pos+1;i<n;i++){
		cout<<arr[i]<<" ";
	}
	for (ll i = 0; i <= pos; ++i)
	{
		cout<<arr[i]<<" ";
	}
}