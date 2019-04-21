#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int mod = 1000000007;
int possible(int n, int start, int m, int k, const vector<bool>& can_put, vector< vector<int> >&dp)
{
    if(m==0){
        // cout << start << " " << m <<endl;
        return 1;
    }
    else if(start>=n) return 0;
    else if(dp[start][m]!=-1) {
        // cout << start << " " << m <<" " << dp[n][m] << endl;
        return dp[start][m];
    }
    else
    {
        int ways =0;
        for(int i =0; i < k && (start+i) < n; i++)
        {
            if(can_put[start+i])
                ways = (ways + possible(n, start+i+1, m-1, k, can_put, dp))%mod;
        }
        return dp[start][m] = ways;
    }
}


int main() {
    int t;
    cin >> t;
    int n, m, k, p;
    while(t--)
    {
        cin >> n >> m >> k >> p;
        vector<bool> can_put(n, true);
        int temp;
        for(int i = 0; i <p; i++){
            cin >> temp;
            temp--;
            can_put[temp]=false;
        }
        vector< vector<int> > dp(n+1, vector<int>(m+1, -1));
        int ways = 0;
        for(int i = 0; i < n; i++)
        {
            if(can_put[i])
                ways = (ways + possible(n, i+1, m-1, k, can_put, dp))%mod;
        }
        cout << ways << endl;
        
    }
    return 0;
}