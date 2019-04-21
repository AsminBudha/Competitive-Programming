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

// limit for array size 
const ll N = 100000; 

ll n; // array size 
ll size;
// Max size of tree 
pair<ll,ll> treepair[2*N];

// function to build the tree 
void build( ll arr[]) 
{ 
    // insert leaf nodes in tree 
    for (ll i=0; i<n && i<size; i++){     
        
        
        treepair[n+i]={arr[i],arr[i]};
    }   
    
    // build the tree by calculating parents 
    for (ll i = n - 1; i > 0; --i){
        

        ll x=treepair[i<<1].first<treepair[i<<1|1].first?treepair[i<<1].first:treepair[i<<1|1].first;
        ll y=treepair[i<<1|1].second<treepair[i<<1].second?treepair[i<<1].second:treepair[i<<1|1].second;
        treepair[i]={x,y};

        
        
    }    
             
} 

// function to update a tree node 
void updateTreeNode(ll p, ll value) 
{ 
    // set value at position p 
    
    treepair[p+n]={value,value};
    
    p = p+n; 
    
    // move upward and update parents 
    for (ll i=p; i > 1; i >>= 1){
        
        ll a=i,b=i^1;
        if(a>b){
            ll temp=a;
            a=b;
            b=temp;
        }
        
        ll x=treepair[a].first<treepair[b].first?treepair[a].first:treepair[b].first;
        ll y=treepair[b].second<treepair[a].second?treepair[a].second:treepair[b].second;
        treepair[i>>1]={x,y};
        
    } 
        
} 

// function to get sum on interval [l, r) 
bool query(ll l, ll r) 
{ 
    l += n; r += n;
    pair<ll,ll> left={0,0},right={MAX,MAX};
    
    bool s = 1;
    while (l < r) {
        if (l%2 == 1){
            // s &= tree[l++];
            if(left.second>treepair[l].first){
                // cout<<"b";
                return false;
            }
            left=treepair[l];
            l++;  
        } 
        if (r%2 == 0){
            // s &= tree[r--];
            if(!right.first>=treepair[r].second){
                // cout<<"a";
                return false;
            }
            right=treepair[r];
            r--;  
        } 
        l /= 2; r /= 2;
    }
    if(l==r){
        if(left.second>treepair[l].first){
                // cout<<"b";
                return false;
            }
            left=treepair[l];
            
    }
    // cout<<"f";
    // cout<<left.first<<"->"<<left.second<<endl;
    // cout<<right.first<<"->"<<right.second<<endl;
    return left.second<=right.first;
    
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // freopen("../input.txt","r",stdin);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];

        // size=n;
        // n=ceil(log(n)/log(2));
        // n=pow(2,n);
        // ll a[n];
        // for(ll i=0;i<size;i++){
        //     a[i]=arr[i];
        // }
        // for(ll i=size;i<n;i++)
        //     a[i]=100000;

        build(arr);
        
        ll q;
        cin>>q;
        while(q--){
            ll x;
            ll y,z;
            cin>>x>>y>>z;
            if(x==1){
                updateTreeNode(y,z);
            }
            else{
                cout<<(query(y,z)?"yes":"no")<<endl;
            }
        }



    }
    return 0;
}