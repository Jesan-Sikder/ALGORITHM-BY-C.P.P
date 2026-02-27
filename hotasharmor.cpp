#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,jesan;
    cin>>n;
    vector<ll>arr(n),ar(n),noob(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
        noob[i]= arr[i]*ar[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     noob[i]= arr[i]*ar[i];
        
    // }
    sort(noob.begin(),noob.end(),greater<ll>());
    
    for (int i = 0; i < n; i++)
    {
        cout<<noob[i]<<" ";
        
    }
    cout<<endl;
    
}