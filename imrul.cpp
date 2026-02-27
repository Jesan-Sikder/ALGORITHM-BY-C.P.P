#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
           int n;
           cin>>n;
           vector<ll>p(n);
           for (int i = 0; i < n; i++)
           {
            cin>>p[i];
           }
             ll x=0;                  
                               
                               
            sort(p.begin(),p.end());
            for (int i = 0; i < n; i++)
            
           {
            
            cout<<p[i]<<" ";
           }                   
             cout<<endl;                  
           for (int i = 0; i < n; i++)
            
           {
            if(p[i]>50){
                x++;
            }
            
           }                     
          cout<<x<<endl;                     
                               
                               
                               
                               
                               
return 0;
}