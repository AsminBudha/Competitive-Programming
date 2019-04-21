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

    // freopen("../input.txt","r",stdin);
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(ll i=2;i<=n;i++){
        ll x;
        cin>>x;
        mp[i]=x;
    }
    ll pos=n;

    std::vector<ll> ans;
    ans.push_back(n);
    while(pos>1){
        ans.push_back(mp[pos]);
        pos=mp[pos];
    }
    for(ll i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    return 0;
}