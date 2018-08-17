#include <iostream>
#include <stdio.h>
using namespace std;
bool check(int n){
	while(n>0){
		int rem=n%10;
		if(rem==7) return true;
		n/=10;
	}
	return false;
}
int main(){
	//freopen("input.txt","r",stdin);
	int x;
	cin>>x;
	int hh,mm;
	cin>>hh>>mm;
	int count=0;
	while(!check(hh) && !check(mm)){
		mm-=x;
		count++;
		if(mm<0){
			mm=60+mm;
			hh--;
			
		}
		if(hh<0){
			hh=24+hh;
		}
	}
	cout<<count;
	return 0;
}