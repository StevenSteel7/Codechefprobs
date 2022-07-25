#include<iostream>
#include <bits/stdc++.h>
#define ll long long int
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define vll vector<ll>
#define mll map<ll, ll>
#define fauto(i, v) for (auto &i : v)
#define f(i, n) for (int i = 0; i < (n); i++)
#define ff(i, a, b) for (int i = (a); i < (b); i++)



using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
    int n;
    cin>>n;
    vll v(n,0);
    f(i,n) { ll a; cin>>a; v[a]++;}

    int counter=0;
    f(i,n) if(v[i]==1) counter++;
    
    if(counter==0) cout<<counter;
    
    else cout<<abs(counter-2);
    
    


   
    }
    return 0;
}