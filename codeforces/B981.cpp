
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool comp(pair<ll,ll> a, pair<ll,ll> b){
    return a.second>b.second;
}
int main() {
    // freopen("../input.txt","r",stdin);
    int n;
    cin>>n;
    std::vector< pair<ll,ll> > v1;
    unordered_map<ll,ll> s1;
    for (int i = 0; i < n; ++i)
    {
        ll a,x;
        cin>>a>>x;
        v1.push_back(make_pair(a,x));
        s1[a]=x;
    }
    int m;
    cin>>m;
    std::vector< pair<ll,ll> > v2;
    unordered_map<ll,ll> s2;
    for (int i = 0; i < m; ++i)
    {
        ll a,x;
        cin>>a>>x;
        v2.push_back(make_pair(a,x));
        s2[a]=x;
    }

    sort(v1.begin(),v1.end(),comp);
    sort(v2.begin(),v2.end(),comp);
    ll sum=0;
    for (auto it=v1.begin();it!=v1.end();it++)
    {
        ll a=(*it).first,x=(*it).second;
        if(s2[a]){
            sum+=(s2[a]>x)?s2[a]:x;
        }
        else{
            sum+=x;
        }
    }
    for (auto it=v2.begin();it!=v2.end();it++)
    {
        ll a=(*it).first,x=(*it).second;
        if(s1[a]){
            
        }
        else{
            sum+=x;
        }
    }
    cout<<sum;
    return 0;
}