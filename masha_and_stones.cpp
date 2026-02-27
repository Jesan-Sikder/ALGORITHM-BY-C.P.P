#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
            ll n;
            cin>>n;
            vector<ll> p(n);
             for (int i = 0; i < n; i++)
             {
               cin>>p[i];
             }
                         ll x=0,y=0;
                         for (int i = 0; i < n; i++)
                         {
                          if(p[i]%2==0){
                            x++;

                          }
                          else{
                            y++;
                          }
                         }
                             
                               
             if(x==n || y==n){
                cout<<"Yes"<<endl;
             }  
             else if(x!=n || y!=n) {
                cout<<"No"<<endl;                
             }                
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}