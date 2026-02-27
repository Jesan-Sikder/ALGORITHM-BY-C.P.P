#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
                               
             ll a,b,f=0,x= 0;
             cin>>a>>b;
             vector<ll>arr(a),jesan(a);
             for (ll i = 0; i <a; i++)
             {
                cin>>arr[i];
             }
             for (ll i = 0; i <a; i++){
             for (ll j = i+1; j <a; j++)
             {
                jesan[j]=arr[i]*arr[j];
                if(jesan[j]%b == 0){
                    f =1;
                    break;

                }
                else{
                    x= 0;
                }
             }  
            }           
                if(f==1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;          
                                                        
                               
return 0;
}