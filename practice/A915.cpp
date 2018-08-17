#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int max=-1;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(k%x==0 && x>max) max=x;
	}
	cout<<k/max;
	return 0;
}