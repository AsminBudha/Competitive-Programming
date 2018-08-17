
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MOD = 1e5+1;
int num[10];
int main() {
    freopen("input.txt","w",stdout);
    srand(time(0));
    ll n=rand()%MOD;
    cout<<n<<" ";
    cout<< rand()%MOD<<endl;
    for (ll i = 0; i < n; ++i)
    {
        ll a=rand()%MOD;
        cout<<a;
        cout<<endl;
    }
    return 0;
}