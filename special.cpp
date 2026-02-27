// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define dd double
// int main(){
//                 ll a,n = 4;
//                 cin>>a;
//                 vector<ll>arr(n),j(n),d(n);
               
                               
//                     for (ll i = 0; i < n; i++)
//                     {
//                         arr[i]= a%10;
//                         a = a/10;
//                     }              
//                 sort(arr.begin(),arr.end());

                               
                               
//                 for (ll i = 0; i < n; i++)
//                 {
//                     cout<<arr[i]<<" ";
//                     j[i]= arr[i];
//                 } 

//                   sort(j.begin(),j.end(),greater<ll>());
//                   for (ll i = 0; i < n; i++)
//                   {
//                       cout<<j[i]<<" ";
                      
//                   } 


                               
// return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k;
    cin >> k;

    // Convert to string and pad with 0s to make sure it's 4 digits
    string s = to_string(k);
    while (s.length() < 4) s = '0' + s;

    // Check if all digits are the same
    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) {
        cout << "No" << endl;
        return 0;
    }

    int steps = 0;
    while (k != 6174 && steps < 10) {
        s = to_string(k);
        while (s.length() < 4) s = '0' + s;

        string asc = s;
        string desc = s;
        sort(asc.begin(), asc.end());
        sort(desc.begin(), desc.end(), greater<char>());

        int small = stoi(asc);
        int big = stoi(desc);

        k = big - small;
        steps++;
    }

    if (k == 6174)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
