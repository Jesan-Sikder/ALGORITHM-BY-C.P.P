#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
     pair<int , string> p ;
     //p = make_pair(2,"abc")  ;
     p = {545,"jesan"};
     cout<<p.first<<" "<<p.second<<endl;                      
                               
       /*int a[]={1,2,3};
       int b[]={4,5,6}*/                        
                               
       pair<int,int > p_arr[3];
       p_arr[0]={0,1};
       p_arr[1]={2,3};
       p_arr[2]={4,5};
      

       swap(p_arr[0],p_arr[2]);

       for (int i = 0; i < 3; i++)
       {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
       }
       
                               
                               
                               
                               
                               
                               
                               
return 0;
}