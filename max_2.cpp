#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
                             
       int n;
       cin>>n;
          vector<ll>p(n),t(n);

            for (int i = 0; i < n; i++)
            {
                cin>>p[i];
            }

            for (int i = 0; i < n; i++)
            {
                cin>>t[i];
            }

        vector<pair<ll,ll>>power(n);


        for (int i = 0; i < n; i++)
        {
            power[i].first= p[i]*t[i];
            power[i].second = i;
        }
        sort(power.begin(),power.end(),greater<pair<ll,ll>>());
        for (int i = 0; i < n; i++)
        {
           cout<<power[i].first<<" ";
        }
      
        cout<<endl;
                               
return 0;
}