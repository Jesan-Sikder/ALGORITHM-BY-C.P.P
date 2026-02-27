#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, jesan;
    cin>>n;
    vector<ll>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   // sort(arr.begin(),arr.end(),greater<ll>());
    ll maxx = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx,arr[i]);
       // jesan = arr[maxx];

    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==maxx){
            jesan = i;
        }

    }

    cout<<jesan+1<<endl;
    
    
}