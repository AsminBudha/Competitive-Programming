#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
  int inputs[] = {7,8,4,1,6,5,9};
  vector<int> v(inputs, inputs+7);
  sort(v.begin(),v.end());
  cout<<binary_search(v.begin() , v.end() , 1 )<<endl;  //prints 1 , Boolean true

  cout<<binary_search(v.begin() , v.end() , 9)<<endl; //prints 0 , Boolean false
  return 0;
}

