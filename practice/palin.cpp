#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define LIM 1000000 

std::vector<ll> v;
ll createPalin(ll a,bool isOdd){
	ll n=a;
	ll palin=a;
	if (isOdd)
	{
		n/=10;
	}
	while(n>0){
		palin=palin*10+(n%10);
		n/=10;
	}
	return palin;
}
int main(){
	// freopen("../input.txt","r",stdout);
	// ll number;
	// for (int i = 0; i < 2; ++i)
	// {
	// 	ll start=1;
	// 	while((number=createPalin(start,i%2))<=LIM){
	// 		v.push_back(number);
	// 		start++;
	// 	}
	// }
	// sort(v.begin(),v.end());
	// srand(time(0));
	// cout<<5<<endl;
	// for(int i = 0; i<5; i++)
	// 	cout<<(rand()%LIM+1)<<" "<<(rand()%LIM+1)<<endl;
        // printf("%d\n", rand()%LIM+1);
	// for (std::vector<ll>::iterator it=v.begin();it!=v.end(); ++it)
	// {
	// 	cout<<*it<<"\n";
	// }
	freopen("../input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		string in;
		cin>>in;
		// vector<ll>::iterator up;
		// up= upper_bound (v.begin(),v.end(),in);
		// ll pos=up-v.begin();
		// cout<<*up;
		// cout<<"\n";

		ll len=ceil((double)in.size()/2);
		std::vector<char> v;
		for (ll i = 0; i < len; ++i)
		{
			v.push_back(in[i]);
		}
		if (v[0]!='9')
		{
			ll half=len;
			while(v[--half]=='9'){
				v[half]='0';
			}
			v[half]++;
			for (ll i = 0; i < len; ++i)
			{
				cout<< v[i];
			}
			ll start=in.size()%2?len-2:len-1;
			for (ll i = start; i >=0; --i)
			{
				cout<< v[i];
			}
		}
		else{
			ll half=len;
			while(v[--half]!='9'){
				v[half]++;
			}
			if (half==0)
			{
				v[half]='0';
				v.insert(v.begin(),'1');
			}
			if (in.size()%2)
			{

				for (ll i = 0; i < len; ++i)
				{
					cout<< v[i];
				}
				for (ll i = len-1; i >=0; --i)
				{
					cout<< v[i];
				}
			}
			else{
				for (ll i = 0; i < v.size(); ++i)
				{
					cout<< v[i];
				}
				for (ll i = v.size()-2; i >=0; --i)
				{
					cout<< v[i];
				}
			}
		}

		cout<<"\n";
		
	}
	return 0;
}