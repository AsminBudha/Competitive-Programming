#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){

	long q;
	cin>>q;
	map<string,int> mapset;
	set<int> valset;
	while(q-->0){
		string type;
		cin>>type;
		if(type=="set"){
			String name;
			unsigned long val;
			cin>>name>>val;
			mapset[name]=val;
			valset.insert(val);
		}
		else if(type=="query"){
			string key;
			cin>>key;
			std::map<string, int>::iterator it=mapset.find(key);
			int ans=it-mapset.begin();
			cout<<ans;
		}
	}
	return 0;
}