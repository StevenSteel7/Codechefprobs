#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define REP(i,n) for(lli i=0;i<n;i++)
#define REP1(j,m) for(int j=0;j<m;j++)
#define REPP(i,l,r) for(int i=l;i<=r;i++)
#define mod 1000000007
#define pb push_back
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        int n,Tsum=0;
        
       cin>>n; 
       
       ll a[n];
       for(int i =0;i<n;i++) cin>>a[i];

       // for dec 1000-i sum
       sort(a,a+n,greater<int>()); // sort in descending order
       for(auto x: a)
        {Tsum+=(1000-x);}
        
        // 1000*n-Tsum is the sum of dec order array when minus by 1000
        ll finalAns=INT_MIN , sum=0;

        for( int i=0 ; i<n ; i++){
            sum +=a[i]; 
            finalAns = max(finalAns , sum * (Tsum - (((i+1)*1000)-sum) ));
             
        }

        cout<<finalAns<<endl;
      
       
    }
    return 0;
}
