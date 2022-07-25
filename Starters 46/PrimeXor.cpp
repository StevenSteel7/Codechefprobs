#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    int z = x^y;
    int ans[3] = {2 ,2,2};
    //atlest two of x,y,z are odd.. so , only one 2 in answer will remain
    if(x&1) ans[0] = x^2;
    if(y&1) ans[1] = y^2;
    if(z&1) ans[2] = z^2;

    sort(ans,ans+3);
    for(auto i : ans) cout<<i<<" ";
    cout<<endl;
    }


    return 0;
}