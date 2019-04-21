#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("../input.txt","r",stdin);
    int letter[26],z,j=0,b=0;
    char i;
    string st;
    for(i='a';i<='z';i++)
    {
        cin>>letter[i];

    }
      cin>>st;
    z=st.length();
    sort(st.begin(),st.end());
     for(char i='a';i<='z';i++)
    {
        if(st[j++]==i)
        {
            
            b=max(letter[i],b);
        }
        else
        {
            j--;
        }

    }
   
    cout<<z*b*1<<endl;
	return 0;
}