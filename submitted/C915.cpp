#include <iostream>
#include <algorithm>
#include <vector>
typedef long long int lli;
using namespace std;
int main(){
 	lli a,b;
 	cin>>a>>b;	
 	std::vector<int> v;
 	lli temp=a;
 	while(temp>0){
 		int rem=temp%10;
 		v.push_back(rem);
 		temp/=10;
 	}
 	sort(v.begin(), v.end());
 	reverse(v.begin(), v.end());
 	
 	temp=b;
 	std::vector<int> vb;
 	while(temp>0){
 		int rem=temp%10;
 		vb.push_back(rem);
 		temp/=10;
 	}
 	lli lim=0;
 	lli ans=0;
 	int i=0;
 	while(vb.size()>v.size()){
 		    lim=(lim*10)+vb.back();
 		    vb.pop_back();
 	}
 	while(!v.empty() && !vb.empty()){
 	    lim=(lim*10)+vb.back();
 		    vb.pop_back();
  		for(std::vector<int>::iterator it=v.begin();it!=v.end();it++){
  			ans=(ans*10)+(*it);
  			//cout<<ans<<" "<<lim<<" "<<ans<<endl;
  			if(ans<=lim){
  				v.erase(it);
  				break;
  			}else{
  				ans/=10;
  			}
  		}
 	}
 	cout<<ans;
	return 0;
}