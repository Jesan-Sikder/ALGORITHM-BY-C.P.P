#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,flag = 0,jesan;
	cin>>n;
	vector<ll>arr(n);
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	ll max_v = arr[0];
    for (int  i = 1; i < n; i++)
    {
        max_v = max(max_v,arr[i]);
    }
    // for(int i =0;i<n;i++){
	// 	if(arr[i]==max_v){
    //         jesan=i+1;
    //     }
        
		cout<<max_v<<endl;
            
       
// cout<<jesan<<endl;
  

}
