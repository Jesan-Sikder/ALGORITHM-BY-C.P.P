#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){


    int n = 8,flag =0;
    vector<ll>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //vector<ll>ar={60,60,60,60,60,60,60,60};
    /*for (int i = 0; i < n; i++)
    {
       
           if(arr[i]==60){{
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                  if(arr[i]==ar[j]){
                    flag ++;
                  }

                }
            }
           }
            
          
    }}*/
   for (int i = 0; i < n; i++)
   {
    if(arr[0]>=60 && arr[1]>=60 && arr[2]>=60 && arr[3]>=60 && arr[4]>=60 && arr[5]>=60 && arr[6]>=60 && arr[7]>=60  ){
        flag =1;
    }
    else {
        flag = 0;
    }
   }
   
    if(flag ==1){
        cout<<"Eligible"<<endl;
    }
    else {
        cout<<"Not Eligible"<<endl;
    }

}