#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
            ll t,flag;
            cin>>t;
            for (int i = 0; i < t; i++)
            {
                ll n;
                cin>>n;
                string str;
                vector<pair<int,string>>v(n);
                for (int i = 0; i < n; i++)
                {
                    cin>>v[i].first;
                    cin>>v[i].second;
                }
                //cout<<"Case "<<i+1<<": "<<v[0].second<<" "<<v[1].second<<" "<<v[3].second<<endl;
// if(v[i].first==1){
//     cout<<i<<endl;
 
cout<<"Case "<<i+1<<": ";
for (int i = 0; i < n; i++)
{
    if(v[i].first == 1  ){
   cout<<v[i].second<< " ";

    }
    if(v[i].first == 3 ){
        cout<<v[i].second<<" ";
     
         }
         if(v[i].first == 6 ){
            cout<<v[i].second<<" ";
         
             }
             if(v[i].first == 10 ){
                cout<<v[i].second<<" ";
             
                 }if(v[i].first == 15 ){
                    cout<<v[i].second<<" ";
                 
                     }if(v[i].first == 20 ){
                        cout<<v[i].second<<" ";
                     }
                         
}
                //cout<<"Case "<<i+1<<": "<<v[0].second<<" "<<v[1].second<<" "<<v[3].second<<endl;
   //cout<<"Case "<<i+1<<": "<<v[i].second<<" "<<v[i].second<<" "<<v[i].second<<endl;
cout<<endl;

            }
                               
                               
         // 1 3 6
         //0 2 5                     
                               
                               
                               
                               
                               
                               
                               
                               
                               

}
