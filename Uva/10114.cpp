#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;
int main(){
	 // freopen("../input.txt","r",stdin);
	int loanDur,Nrate;
	double downPayment,loan;

	while(true){
		cin>>loanDur>>downPayment>>loan>>Nrate;
		if (loanDur<0)
		{
			break;
		}
		std::map<int, double> ratelist;
		int x;
		double y;
		for(int i=0;i<Nrate;i++){
			cin>>x>>y;
			ratelist[x]=y;
		}

		
		int curmonth=0;
		map<int,double>::iterator it=ratelist.begin();
		double currate=(curmonth==(it)->first)?(it->second):0;
		double carPrice=(loan+downPayment),monthlyPayment=loan/loanDur;
		if (currate==it->second)
		{
			carPrice=carPrice-(currate*carPrice);
			it++;
		}
		// cout<<loan<<" "<<carPrice<<endl;
		while(loan>carPrice){
			curmonth++;
			if (curmonth==(it)->first)
			{
				currate=it->second;
				it++;
				
			}
			// cout<<currate<<" ";
			
			carPrice=carPrice-(currate*carPrice);
			if(curmonth>0)
				loan-=monthlyPayment;
			// else loan-=payment;
			 // cout<<carPrice<<" "<<loan<<"\n";
			 
		}
		
		cout<<curmonth<<" month"<<(curmonth==1?"\n":"s\n");
	}
	
	return 0;
}