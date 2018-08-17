#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x==0 || y==0) std::cout << "black" << std::endl;
	else{
	    bool black=0;
	    if((x>0 && y>0) || (x<0&& y<0)){
	        black=1;
	    }
	    else{
	        black=0;
	    }
	    if(x<0)x=-x;
	    if(y<0)y=-y;
	    int m=max(x,y);
	    if(black){
	            cout<<(m%2==0?"black":"white");
	    }
	    else{
	        cout<<(m%2==1?"black":"white");
	    }
	}
	
	return 0;
}