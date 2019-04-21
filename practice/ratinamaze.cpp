#include<bits/stdc++.h>
using namespace std;

vector<string> sol[11][11];
std::vector<string> vans;
bool univisited[11][11];
int n;
int m[11][11];
void path(pair<int,int> p){

}
void printFunction(pair<int,int> p,string ans){
	if(p.first==n-1 && p.second==n-1){
		vans.push_back(ans);
		return;
	} 
	int i=p.first,j=p.second;
	// cout<<i<<" "<<j<<endl;
	//up
				if(i-1>=0 && m[i-1][j]==1 && univisited[i-1][j]){
					univisited[i-1][j]=false;
					printFunction(make_pair(i-1,j),ans+"U");
					univisited[i-1][j]=true;
				}
				//right
				if(j+1<n && m[i][j+1]==1 && univisited[i][j+1]){
					univisited[i][j+1]=false;
					printFunction(make_pair(i,j+1),ans+"R");
					univisited[i][j+1]=true;
				}
				//down
				if(i+1<n && m[i+1][j]==1 && univisited[i+1][j]){
					univisited[i+1][j]=false;
					printFunction(make_pair(i+1,j),ans+"D");
					univisited[i+1][j]=true;
				}
				//left
				if(j-1>=0 && m[i][j-1]==1 && univisited[i][j-1]){
					univisited[i][j-1]=false;
					printFunction(make_pair(i,j-1),ans+"L");
					univisited[i][j-1]=true;
				}
}
int main(){
	freopen("../input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		
		
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cin>>m[i][j];
				sol[i][j].clear();
				univisited[i][j]=true;
			}
		}
		univisited[0][0]=false;
		sol[0][0].push_back("");
		printFunction(make_pair(0,0),"");
		sort(vans.begin(),vans.end());
		for(auto it:vans){
			cout<<it<<" ";
		}
		cout<<"\n";
	}
	return 0;
}