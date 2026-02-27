#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){
    ll n,k,jesan;
    cin>>n>>k;
    vector<ll>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i]==k){
            jesan = i;
            break;

        }
    }
    cout<<jesan+1<<endl;

    
}