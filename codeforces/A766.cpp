/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   A766.cpp
 * Author: asmin
 *
 * Created on May 9, 2018, 10:24 AM
 */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    string a,b;
    cin>>a>>b;
   
    if(a.size()==b.size()){
        bool same=true;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                same=false;
                break;
            }
        }
        cout<<(same?(-1):a.size());
    }
    else{
        cout<<((a.size()>b.size())?a.size():b.size());
        
    }
    return 0;
}

