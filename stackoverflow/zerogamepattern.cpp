
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	//init nimbers
	int arr[100];
	fill(arr,arr+100,-1);

	arr[0]=0;
	queue<int> q;
	q.push(0);
	while(q.size()>0){
		int u=q.front();
		q.pop();
		if (u+1<100 && arr[u+1]!=1)
		{
			arr[u+1]=(arr[u]+1)%2;
			q.push(u+1);
		}
		if (u+3<100 && arr[u+3]!=1)
		{
			arr[u+3]=(arr[u]+1)%2;
			q.push(u+3);
		}
		if (u+4<100 && arr[u+4]!=1)
		{
			arr[u+4]=(arr[u]+1)%2;
			q.push(u+4);
		}
	}
	int n=7;
	cout<<"Welcome to the Game\n";
	cout<<"You are player 1\n AI is player 2\n";
	int play=0;
	while(n>0){
		if (play%2==0)
		{
			int step=-1;
			cout<<"Enter your move?";
			cin>>step;
			n-=step;
			cout<<"Now n="<<n<<endl;
		}
		else{
			int step=1;
			if(n-1>=0 && arr[n-1]==0) step=1;
			if(n-3>=0 && arr[n-3]==0) step=3;
			if(n-4>=0 && arr[n-4]==0) step=4;
			n-=step;
			cout<<"AI played "<<step<<" move\n";
			cout<<"Now n="<<n<<endl;
		}

		play=(play+1)%2;
	}
	if (play)
	{
		cout<<"You won";
	}
	else cout<<"AI won";
	return 0;
}
