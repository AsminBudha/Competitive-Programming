#include <iostream>
#include <cmath>
using namespace std;
int position(int lastCheck){
	return log2(lastCheck);
}
int main(){
	int n=2;
	int lastCheck=0;
	int temp=n;
	while(temp>0){
		lastCheck=temp&(-temp);
		int pos=position(lastCheck);
		temp&=(~(1<<pos));
	}
	cout<<(n-lastCheck)*2+1;
	return 0;
}