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

pair<ll,ll> available[2000][2000];
int dist[2000][2000];
int n,m,r,c;
ll x,y;

class comp{
public:
    bool operator()(const pii& a, const pii& b){
        return a.first+a.second<b.first+b.second;
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("../input.txt","r",stdin);
    cin>>n>>m>>r>>c;
    r--;c--;
    
    cin>>x>>y;
    string g[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>g[i];
        fill(dist[i],dist[i]+n,MAX);
    }
    available[r][c]={x,y};

    // queue<pair<int,int> > q;
    priority_queue< pii, vector <pii> , comp > q;
    
    q.push({r,c});
    dist[r][c]=0;
    ll ans=0;
    while(!q.empty()){
        pair<int,int> u=q.top();
        int a=u.first,b=u.second;
        ans++;
        // cout<<a<<" "<<b<<endl;
        g[a][b]='+';
        ll l=available[a][b].first,r=available[a][b].second;

        q.pop();
        //top
        if(a-1>=0 && g[a-1][b]=='.'){
            q.push({a-1,b});
            available[a-1][b]=available[a][b];
            g[a-1][b]='+';
        }
        if(b+1<m && g[a][b+1]=='.' && r>0){
            q.push({a,b+1});
            available[a][b+1]={l,r-1};
            g[a][b+1]='+';

        }
        if(a+1<n && g[a+1][b]=='.'){
            q.push({a+1,b});
            available[a+1][b]={l,r};
            g[a+1][b]='+';
        }
        if(b-1>=0 && g[a][b-1]=='.' && l>0){
            q.push({a,b-1});
            available[a][b-1]={l-1,r};
            g[a][b-1]='+';
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout<<g[i][j];
            // cout<<available[i][j].first<<"->"<<available[i][j].second<<" ";
            // if(g[i][j]=='+') ans++;
        }
        cout<<endl;
    }
    cout<<ans;
    
    return 0;
}