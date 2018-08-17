#include <iostream>
typedef long long int lli;
using namespace std;
int main(){

	int given[20][20];
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cin>>given[i][j];
		}
	}
	lli max=0;
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			//up
			lli sum=given[i][j]*(i-1>=0?given[i-1][j]:1)*(i-2>=0?given[i-2][j]:1)*(i-3>=0?given[i-3][j]:1);
			if(sum>max) {
			    max=sum;
			    cout<<i<<"u "<<j<<endl;
			}
			//down
			sum=given[i][j]*(i+1<20?given[i+1][j]:1)*(i+2<20?given[i+2][j]:1)*(i+3<20?given[i+3][j]:1);
			if(sum>max){
			    max=sum;  
			    cout<<i<<"d "<<j<<endl;
			} 
			//left
			sum=given[i][j]*(j-1>=0?given[i][j-1]:1)*(j-2>=0?given[i][j-2]:1)*(j-3>=0?given[i][j-3]:1);
			if(sum>max){
			  max=sum;  
			    cout<<i<<" l"<<j<<endl;
			} 
			//right
			sum=given[i][j]*(j+1<20?given[i][j+1]:1)*(j+2<20?given[i][j+2]:1)*(j+3<20?given[i][j+3]:1);
			if(sum>max){
			  	max=sum;  
			    cout<<i<<"r "<<j<<endl;
			} 
			//left diagonal up
			sum=given[i][j]*(i-1>=0 && j-1>=0?given[i-1][j-1]:1)*(i-2>=0 && j-2>=0?given[i-2][j-2]:1)*(i-3>=0 && j-3>=0?given[i-3][j-3]:1);
			if(sum>max){
			  max=sum;  
			    cout<<i<<" ldu"<<j<<endl;
			} 
			//left diagonal down
			sum=given[i][j]*(i+1<20 && j+1<20?given[i+1][j+1]:1)*(i+2<20 && j+2<20?given[i+2][j+2]:1)*(i+3<20 && j+3<20?given[i+3][j+3]:1);
			if(sum>max){
			  max=sum;  
			    cout<<i<<"ldd "<<j<<endl;
			} 
			//right diagonal up
			sum=given[i][j]*(i-1>=0 && j+1<20?given[i-1][j+1]:1)*(i-2>=0 && j+2<20?given[i-2][j+2]:1)*(i-3>=0 && j+3<20?given[i-3][j+3]:1);
			if(sum>max){
			  max=sum;  
			    cout<<i<<"rdu "<<j<<endl;
			} 
			//right diagonal down
			sum=given[i][j]*(i+1<20 && j-1>=0?given[i+1][j-1]:1)*(i+2<20 && j-2>=0?given[i+2][j-2]:1)*(i+3<20 && j-3>=0?given[i+3][j-3]:1);
			if(sum>max){
			  max=sum;  
			  cout<<i<<"rdd "<<j<<endl;
			} 
		}
	}
	cout<<max;
	return 0;
}