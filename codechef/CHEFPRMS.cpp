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

    bool isPrime[200];
    fill(isPrime,isPrime+200,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for (int i = 2; i*i <= 200; ++i)
    {
        if(isPrime[i]){
            for (int j = i+i; j <= 200; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    std::vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<=200;i+=2){
        if(isPrime[i]){
            primes.push_back(i);
            // cout<<i<<" ";
        }
    }
    // cout<<endl;
    std::vector<int> semiprimev;
    bool semiprimes[201];
    fill(semiprimes,semiprimes+201,false);
    for (int i = 0; i < primes.size(); ++i)
    {
        for (int j = i+1; j < primes.size(); ++j)
        {
            if(primes[i]*primes[j]>200){
                break;
            }
            // cout<<primes[i]*primes[j]<<" ";
            semiprimes[primes[i]*primes[j]]=true;
            semiprimev.push_back(primes[i]*primes[j]);
        }
        // cout<<endl;
    }
    sort(semiprimev.begin(),semiprimev.end());
    
    // freopen("../input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        bool isOk=false;
        for (int i = 0; i < semiprimev.size(); ++i)
        {
            if(n-semiprimev[i]<2){
                break;
            }
            if(semiprimes[n-semiprimev[i]]){
                // cout<<n-semiprimev[i]<<" "<<semiprimev[i]<<"->";
                isOk=true;
                break;
            }
        }
        if (isOk)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}