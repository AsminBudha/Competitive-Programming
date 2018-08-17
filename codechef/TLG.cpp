#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("../input.txt","r",stdin);

	long t;
	cin>>t;
	long a,b;
	int leadPl=-1;
	long lead=-1,curLead;
	std::map<long, int> map;
	ll p1=0,p2=0;
	while(t-->0){
		cin>>a>>b;
		p1+=a;p2+=b;
		curLead=p1-p2;
		// cout<<curLead<<endl;
		map[fabs(curLead)]=(curLead>0)?1:2;
		// if (fabs(curLead)>lead)
		// {
		// 	lead=fabs(curLead);
		// 	leadPl=curLead>0?1:2;
		// }
	}
	std::map<long, int>::iterator it=map.end();
	it--;
	cout<< (it->second) <<" "<< it->first;
	return 0;
}