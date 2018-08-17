
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int num[10];
int main() {
    freopen("../input.txt","r",stdin);
    ll x,y;
    cin>>x>>y;
    cout<<y<<" "<<x<<" ";
    ll a=x,b=y;
    std::vector<int> xv;
    while(a>0){
        int rem=a%10;
        num[rem]++;
        a/=10;
        xv.push_back(rem);
    }
    sort(xv.begin(),xv.end());
    ll gen=0;
    for (std::vector<int>::iterator it=xv.begin();it!=xv.end(); ++it)
    {
        gen=gen*10+(*it);
    }
    
    vector<int> v;
    while(b>0){
        v.push_back(b%10);
        b/=10;
    }
    if(gen>y || xv.size()>v.size()){
        cout<<-1;
        return 0;
    }
    do {
        if (xv[0]==0)
        {
            continue;
        }
        gen=0;
        for (std::vector<int>::iterator it=xv.begin();it!=xv.end(); ++it)
        {
            gen=gen*10+(*it);
        }
        
    } while ( std::next_permutation(xv.begin(),xv.end()) );
    std::vector<int> ans;
    for(int i=v.size()-1;i>=0;i--){
        int n=v[i];
        while(num[n]==0){
            n--;
        }
        if (n<0)
        {
            cout<<-1;
            return 0;
        }
        ans.push_back(n);
        
        num[n]--;
        if(v[i]!=n){
            for (int k = 0; k< ans.size(); ++k)
            {
                cout<<ans[k];
            }
            for(int j=9;j>=0;j--){
                if(num[j]==0){
                    continue;
                }
                while(num[j]>0){
                    cout<<j;
                    num[j]--;
                }
            }
            return 0;
        }
        
    }
    return 0;
}