#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	freopen("input/input05.txt","w",stdout);
	srand (time(NULL));
	int m=rand()%51+2;
	int n=rand()%51+2;
	int x=n;
	int y=rand()%51+2;
	cout<<m<<" "<<n<<endl;
	cout<<x<<" "<<y<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<rand()%101<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<rand()%101<<" ";
		}
		cout<<"\n";
	}
}