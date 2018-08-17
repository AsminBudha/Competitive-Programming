#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int left=0;
	int right=0;
	int up=0;
	int down=0;
	while(n-->0){
		char c;
		cin>>c;
		if(c=='L') left++;
		else if(c=='R') right++;
		else if(c=='U') up++;
		else if(c=='D') down++;
		
	}
	cout<<min(left,right)+min(up,down);
	return 0;
}