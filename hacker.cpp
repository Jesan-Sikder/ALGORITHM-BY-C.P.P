#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
         ll t;
         cin>>t;
         while(t--){
            ll a,b;
            cin>>a>>b;
            ll n= a+b;
            vector<ll>arr(n);
            for (int i = 0; i < n; i++)
            {
               cin>>arr[i];
            }
            vector<pair<ll,ll>>power(n);


        for (int i = 0; i < n; i++)
        {
            power[i].first= arr[i];
            power[i].second = i;
        }
        sort(power.begin(),power.end(),greater<pair<ll,ll>>());
        for (int i = 0; i < n; i++)
        {
           cout<<power[i].first<<" ";
        }
            
        cout<<endl;
                               
       
                            
                               
                               
    }                         
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}
