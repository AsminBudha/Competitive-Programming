#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int N;
ll dp[25][25];
bool unvisited[25][25];
void search(int a,int b){
	for (int k = 0; k < N; ++k)
	{
		fill(dp[k],dp[k]+N,INT_MAX);
		fill(unvisited[k],unvisited[k]+N,true);
	}
	
	queue< pair<int,int> > q;
	q.push(make_pair(0,0));
	dp[0][0]=0;
	ll i=0;
	while(!q.empty()){
		
		pair<int,int> u=q.front();
		q.pop();
		int i=(u.first);
		int j=(u.second);
		unvisited[i][j]=false;

		ll cur=dp[i][j]+1;
		
		if (i-a>=0 && j-b>=0 && unvisited[i-a][j-b])
		{
			dp[i-a][j-b]=cur<dp[i-a][j-b]?cur:dp[i-a][j-b];
			if (dp[i-a][j-b]==cur)
			{
				q.push(make_pair(i-a,j-b));
				unvisited[i-a][j-b]=false;
				
			}
		}
		if (i-a>=0 && j+b<N && unvisited[i-a][j+b])
		{
			dp[i-a][j+b]=cur<dp[i-a][j+b]?cur:dp[i-a][j+b];
			if (dp[i-a][j+b]==cur)
			{
				q.push(make_pair(i-a,j+b));
				unvisited[i-a][j+b]=false;
			}
		}
		if (i+a<N && j-b>=0 && unvisited[i+a][j-b])
		{
			dp[i+a][j-b]=cur<dp[i+a][j-b]?cur:dp[i+a][j-b];
			if (dp[i+a][j-b]==cur)
			{
				q.push(make_pair(i+a,j-b));
				unvisited[i+a][j-b]=false;
			}
		}
		if (i+a<N && j+b<N && unvisited[i+a][j+b])
		{
			dp[i+a][j+b]=cur<dp[i+a][j+b]?cur:dp[i+a][j+b];
			if (dp[i+a][j+b]==cur)
			{
				q.push(make_pair(i+a,j+b));
				unvisited[i+a][j+b]=false;
			}
		}

		if (i-b>=0 && j-a>=0 && unvisited[i-b][j-a])
		{
			dp[i-b][j-a]=cur<dp[i-b][j-a]?cur:dp[i-b][j-a];
			if (dp[i-b][j-a]==cur)
			{
				q.push(make_pair(i-b,j-a));
				unvisited[i-b][j-a]=false;
			}
		}
		if (i-b>=0 && j+a<N && unvisited[i-b][j+a])
		{
			dp[i-b][j+a]=cur<dp[i-b][j+a]?cur:dp[i-b][j+a];
			if (dp[i-b][j+a]==cur)
			{
				q.push(make_pair(i-b,j+a));
				unvisited[i-b][j+a]=false;
			}
		}
		if (i+b<N && j-a>=0 && unvisited[i+b][j-a])
		{
			dp[i+b][j-a]=cur<dp[i+b][j-a]?cur:dp[i+b][j-a];
			if (dp[i+b][j-a]==cur)
			{
				q.push(make_pair(i+b,j-a));
				unvisited[i+b][j-a]=false;
			}
		}
		if (i+b<N && j+a<N && unvisited[i+b][j+a])
		{

			dp[i+b][j+a]=cur<dp[i+b][j+a]?cur:dp[i+b][j+a];
			if (dp[i+b][j+a]==cur)
			{
				q.push(make_pair(i+b,j+a));
				unvisited[i+b][j+a]=false;
				
			}
		}
		

	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("../../input.txt","r",stdin);
	
	cin>>N;
	for (int i = 1; i < N; ++i)
	{
		for (int j = 1; j < N; ++j)
		{
			
			search(i,j);
			cout<<(dp[N-1][N-1]==INT_MAX?-1:dp[N-1][N-1])<<" ";			
		}
		cout<<endl;
	}
	return 0;
}