#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//sort the string
int main(){
    
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int counter=0;
    string arr;
    cin>>arr;
    for(int i = 0; i<n;i++)
        if (arr[i+1]=='0' - arr[i]=='1' ){counter++; }

    }
    return 0;
}