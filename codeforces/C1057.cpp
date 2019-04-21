#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

//typedefs
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef map<int, int> mii;

//Constants
const ll MOD = 10e9 + 7;
const long double PI = acos((long double)(-1.0));
const long double EPS = 1e-9;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("../input.txt","r",stdin);
    int n,s,k;
    cin>>n>>s>>k;
    int arr[n+1],csum[n+1];
    char c[n+1];
    csum[0]=0;
    arr[0]=0;
    bool canBe=false;
    for (int i = 1; i <=n; ++i)
    {
        cin>>arr[i];
        if(arr[i-1]<arr[i]){
            csum[i]=arr[i]+csum[i-1];
        }
        else{
            csum[i]=arr[i];
        }
        if(csum[i]>=k){
            canBe=true;
        }
        
    }
    if(!canBe){
        cout<<-1;
        return 0;
    }
    
    return 0;
}