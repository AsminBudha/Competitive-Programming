#include <iostream>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    d=d%n;
    while(d-->0){
        int i=0;
        int temp=arr[0];
        for(;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
