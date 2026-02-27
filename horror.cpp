#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
           int t;
           cin>>t;
           for (int i = 1; i <=t; i++)
           {
            
           
                               
       int n;
       cin>>n;
       vector<ll>arr(n);
    
       for (int i = 0; i < n; i++)
       {
        cin>>arr[i];
       }
         ll jesan;                      
    //  sort(arr.begin(),arr.end());
jesan=arr[0];
    for (int i = 0; i < n; i++)
    {
     jesan = max(jesan,arr[i]);
    }
cout<<"Case "<<i<<": "<<jesan<<endl;
                               
                               
                               
                               
}                            
                               
                               
                               
                               
                               
return 0;
}