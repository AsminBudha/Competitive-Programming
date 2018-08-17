#include <iostream>
using namespace std;
bool check(int x){
	while(x>0){
		int rem=x%10;
		x/=10;
		if(rem==7){
			return true;
		}
	}
	return false;
}
int main(){
	int x;
	cin>>x;
	int hh,mm;
	cin>>hh>>mm;
	if(check(hh) || check(mm)){
		cout<<0;
	}
	else{
		int ans=0;
		do{
			ans++;
			mm-=x;
			//cout<<mm;
			if(mm<0){
				hh--;
				mm=60+mm;
				if(hh<0) hh=23;
			}
            //cout<<hh<<" "<<mm<<endl;
		}while(!check(hh)&&!check(mm));	
		cout<<ans;
	}
	
	return 0;
}

