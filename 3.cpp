#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
          ll n,flag;
          cin>>n;
          vector<ll>arr(n);
          for (int i = 0; i < n; i++)
          {
            cin>>arr[i];
          }
                               
         sort(arr.begin(),arr.end(),less<ll>());
if(arr[0]==0 ||arr[0] == 1){
    flag = 1;
}
else{
    flag = 0;
}
                               
           if(flag == 1){
            cout<<"YES"<<endl;
           }  
           else{
            cout<<"NO"<<endl;
           }                  
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}