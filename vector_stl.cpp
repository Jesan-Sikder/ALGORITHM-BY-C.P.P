#include<bits/stdc++.h>
using namespace std;

// void printvector(vector<int>&v ){
//     cout<<"SIZE : "<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//        cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
// }
void printvector(vector<string>v ){
    cout<<"SIZE : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    
}



// int main(){
 
//    vector<int>v;

// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin>>x;
//     v.push_back(x);//0(1)
   
// }
// //v. pop_back();
// printvector(v);

// vector<int>vip = v;
// vip.push_back(545);
// printvector(vip);
//     return 0;
// }


int main(){
     vector<string>v;
     int n;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
       string s;
       cin>>s;
       v.push_back(s);
     }
     printvector(v);



}