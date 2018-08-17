#include <iostream>
#include <queue>
using namespace std;
int main(){
	int n;
	queue<int> q;
	vector<int> rem;
	while((cin>>n)){
		if(n==0) break;
		for(int i=1;i<=n;i++) q.push(i);
		
		while(q.size()>1){
			rem.push_back(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout<<"Discarded cards:";
		if(rem.size()>0){
		    for(int i=0;i<rem.size()-1;i++){
			    cout<<" "<<rem[i]<<",";
		    }
		    cout<<" "<<rem[rem.size()-1];
		}
		cout<<endl;
		cout<<"Remaining card: "<<q.front()<<endl;
		rem.clear();
		while(!q.empty()) q.pop();
	}
	return 0;
}