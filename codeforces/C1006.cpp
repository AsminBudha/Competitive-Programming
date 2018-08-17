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

int main()
{
	// freopen("../input.txt","r",stdin);
	int n;
	cin>>n;
	ll arr[n];
	ll leftsum[n],rightsum[n],sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum+=arr[i];
		leftsum[i]=sum;
	}
	sum=0;
	for (int i = n-1; i >=0; --i)
	{
		sum+=arr[i];
		// cout<<sum<<" ";
		rightsum[i]=sum;
	}
	int l=0,r=n-1;
	
	ll ans=0;
	while(l<r){
		if (leftsum[l]<rightsum[r])
		{
			l++;
			// cout<<"Left"<<leftsum[l]<<" "<<rightsum[r];
		}
		else if(rightsum[r]<leftsum[l]){
			r--;
			// cout<<"Right";
		}
		else{
			// cout<<"Equal";
			ans=rightsum[r];
			l++;
		}
		// cout<<"\n ";
	}
	cout<<ans;
	// ll ans=0;
	// int l=0,r=n-1;
	// ll lsum=arr[l],rsum=arr[r];
	// bool br=false;
	// while(l<r){
	// 	while(lsum<rsum){
	// 		l++;
	// 		if (l>=r)
	// 		{
	// 			br=true;
	// 			break;
	// 		}
	// 		lsum+=arr[l];
	// 	}
	// 	while(rsum<lsum){
	// 		r--;
	// 		if (l>=r)
	// 		{
	// 			br=true;
	// 			break;
	// 		}
	// 		rsum+=arr[r];
	// 	}
	// 	if (br)
	// 	{
	// 		break;
	// 	}
	// 	cout<<lsum<<" ";
	// 	ans=lsum;
	// 	l++;
	// 	lsum+=arr[l];
	// }
	// cout<<ans;
	return 0;
}