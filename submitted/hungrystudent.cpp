#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int x;
	    cin>>x;
	    bool isTrue=false;
	    for(int i=0;i<=x/3;i++){
	        if(3*i>x) break;
	        for(int j=0;j<=x/7;j++){
	            if(3*i+7*j==x){
	                isTrue=true;
	            }
	            if(3*i+7*j>x) break;
	        }
	        if(isTrue) break;
	    }
	    if(isTrue){
	        std::cout << "YES" << std::endl;
	    }
	    else cout<<"NO\n";
	}
	return 0;
}