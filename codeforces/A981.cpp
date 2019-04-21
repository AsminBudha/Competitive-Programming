
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int num[10];
string in;
bool check(int a,int b){
    while(a<b){
        if (in[a]!=in[b])
        {
            return false;
        }
        a++,b--;
    }
    return true;
}
int main() {
    // freopen("../input.txt","r",stdin);
    
        cin>>in;
        
        int a=0,b=in.size()-1;

        while(a<b){
            if (check(a,b))
            {
                if (!check(a+1,b))
                {
                    // cout<<a+1<<"->"<<b;
                    cout<<(b-a);
                    // break;
                    return 0;
                }
                else if(!check(a,b-1)){
                    // cout<<a<<" "<<b-1;
                    cout<<b-a;
                    // break;
                    return 0;
                }
            }
            else{
                cout<<(b-a)+1;
                // break;
                return 0;
            }
            a++;b--;
        }
        cout<<0;
     
    
    return 0;
}