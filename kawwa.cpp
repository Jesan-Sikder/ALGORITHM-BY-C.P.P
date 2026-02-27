#include <bits/stdc++.h>
using namespace std;
#define ass return 0
#define ll long long
#define dd double
int main(){
int t,n;
cin>>t;
for (int kalu = 1; kalu <= t; kalu++)
{
    cin>>n;
    int j=n;
    char arr[n],count=0;
    for (int i =0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]=='#'){
            count++;
        }
    }
    int num = j-count;
    //cout<<num<<endl;
    int total=num/2;
    cout<<"case "<<kalu<<": "<<total<<endl;

}






ass;
}