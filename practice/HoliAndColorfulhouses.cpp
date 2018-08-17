#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("../input.txt","r",stdin);
	int T;
	cin>>T;
	while(T-->0){
		int n,q;
		cin>>n>>q;
		string in;
		cin>>in;
		int u,v;
		while(q-->0){
			cin>>u>>v;
			int x=min(u,v)-1;
			int y=max(u,v)-1;
			int ans=0;
			for(;x<y;x++){
				if(in[x]!=in[x+1]) ans++;
			}
			x=min(u,v)-1;
			int temp=0;
			while(x!=y){
				int next=(x-1)==0?n:x-1;
				if(in[x]!=in[next]) temp++;
				x=next;
			}
			cout<<min(temp,ans)<<endl;
		}
	}
}