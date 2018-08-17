#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("../input.txt","r",stdin);
	int X;
	double Y;
	cin>>X>>Y;
	if(X%5==0 && Y>=X+0.5f)
			printf("%.2f",Y-(X+0.5f));
	else
		printf("%.2f",Y);
	return 0;
}