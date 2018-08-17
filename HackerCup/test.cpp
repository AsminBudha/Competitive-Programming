#include <bits/stdc++.h>

using namespace std;

string a[105];

typedef long long ll;

int main(){

	freopen("../input.txt","r",stdin);
	freopen("test.txt","w",stdout);
	freopen("2.txt","w",stderr);
	int T;
	cin >> T;
	int t=1;
	while(T--){
		ll n,k,v;
		cin >> n >> k >> v;
		cout << "Case #" << t << ":" << " ";
		t++;
		for(int i=0;i<n;i++)
			cin >> a[i];
		ll start = ((v-1)*k)%n;
		cerr<<start<<endl;
		vector<pair<int,string>> vc;
		for(int i=0;i<k;i++){
			vc.push_back(make_pair(start,a[start]));
			start++;
			start%=n;
		}
		sort(vc.begin(),vc.end());
		for(int i=0;i<vc.size();i++){
			cout << vc[i].second << " ";
		}
		cout << endl;
	}
}