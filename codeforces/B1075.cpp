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

int n,m;
int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int oc;

    stringstream s("127 0xA 459");
    s>>oct>>oc;//Take octal number
    cout<<oc<<endl;
    int h=oc;
    cout<<hex<<h<<endl;
    s>>hex>>oc;//Take hex number
    cout<<oc<<endl;
    s>>dec>>oc;//Take dec number
    cout<<oc<<endl;
    printf("%s\n","Hey");
    cout<<setw(5)<<"HH";
	freopen("../input.txt","r",stdin);
    cin>>n>>m;
    ll arr[n+m];
    int isD[n+m];
    map<int,ll> mp;
    for(int i=0;i<n+m;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<n+m;i++){
    	cin>>isD[i];
    	if(isD[i]){
    		mp[i]=arr[i];
    	}
    }
    int l,r=n+m;

    map<int,ll> ans;
    map<int,ll>::iterator temp=mp.begin();
    ans[(*temp).first]=(*temp).first;
    l=(*temp).first;
    if(m>1){
	    temp=mp.end();
	    temp--;
	    ans[(*temp).first]=n+m-1-(*temp).first;
	    r=(*temp).first;	
    }
    

    int last=l;
    // cout<<l<<"->"<<r<<" "<<ans.size()<<endl;
    for(int i=l+1;i<=min(r,n+m-1);i++){
    	if(isD[i]==0){
    		ans[last]++;
    	}
    	else{
    		int in=i;
    		ans[i]+=0;
    		// cout<<arr[i]<<"y";
    		while(--in>=0){
    			if(isD[in]){
    				break;
    			}
    			if(abs(arr[last]-arr[in])>abs(arr[i]-arr[in])){
    				ans[last]--;
    				ans[i]++;
    			}
    			else{
    				break;
    			}
    		}
    		last=i;
    	}
    }
    for(auto it:ans){
    	// cout<<it.first<<"->";
    	cout<<it.second<<" ";
    }
	return 0;
}

vector<long long >isprime(MAX_SIZE , true); 
vector<long long >prime; 
vector<long long >SPF(MAX_SIZE); 
  
// function generate all prime number less then N in O(n) 
void manipulated_seive(int N) 
{ 
    // 0 and 1 are not prime 
    isprime[0] = isprime[1] = false ; 
  
    // Fill rest of the entries 
    for (long long int i=2; i<N ; i++) 
    { 
        // If isPrime[i] == True then i is 
        // prime number 
        if (isprime[i]) 
        { 
            // put i into prime[] vector 
            prime.push_back(i); 
  
            // A prime number is its own smallest 
            // prime factor 
            SPF[i] = i; 
        } 
  
        // Remove all multiples of  i*prime[j] which are 
        // not prime by making isPrime[i*prime[j]] = false 
        // and put smallest prime factor of i*Prime[j] as prime[j] 
        // [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ] 
        // so smallest prime factor of '10' is '2' that is prime[j] ] 
        // this loop run only one time for number which are not prime 
        for (long long int j=0; 
             j < (int)prime.size() && 
             i*prime[j] < N && prime[j] <= SPF[i]; 
             j++) 
        { 
            isprime[i*prime[j]]=false; 
  
            // put smallest prime factor of i*prime[j] 
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
} 