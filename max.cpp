#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
        vector<int>v;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);

        }
                               
// int m = *max_element(v.begin(), v.end());

//        cout<<m*m<<endl;                        
                             
                               
            int max_efi = 0 ;
            for (int  i = 0; i < n; i++)
            {
               int effi = (i+1)*v[i];
               max_efi = max(max_efi,effi);
            }
            

                               
             cout<<max_efi<<endl;                  
                               
                               
                               
                               
return 0;
}