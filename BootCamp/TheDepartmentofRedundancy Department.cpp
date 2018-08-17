#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	map<int,int> mp;
	while(cin>>n){
		mp[n]++;
	}
	for(std::map<int, int>::iterator i=mp.begin();i!=mp.end();i++){
		cout<<*i<<" "<<mp[*i]<<endl;
	}
	return 0;
}