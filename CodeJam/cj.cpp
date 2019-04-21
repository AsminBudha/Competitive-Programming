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
    // freopen("../input.txt","r",stdin);
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin>>k;
    string s;
    cin>>s;
     map<char,int> mp;
     for(int i=0;i<s.size();i++){
        mp[s[i]]++;
     }

    bool isOk=true;
    for(auto it:mp){
        if(it.second%k!=0){
            isOk=false;
        }
    }

    string ans[k];
    for(int i=0;i<k;i++){
        ans[i]="";
    }
    if(!isOk){
        cout<<-1;
    }
    else{
        for(auto it:mp){
            for(int i=0;i<k;i++){
                for(int j=0;j<it.second/k;j++)
                    ans[i]+=it.first;
            }
        }
        for(int i=0;i<k;i++){
            cout<<ans[i];
        }
    }

}
