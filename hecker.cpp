// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define dd double
// int main()
// {
//     vector<ll> p;
//     vector<ll> coin = {32, 16, 8, 4, 2, 1};
//     ll sum = 0, flag;
//     ll t, px;
//     cin >> t >> px;
//     ll x = px - t;
//     //cout<<coin.size()<<endl;
//     for (int i = 0; i < coin.size(); i++)
//     {
//         if(x==0){
//             cout<<"No"<<endl;
//             return 0;
//            }
//        else if (x <= 63)
//         {

//             if (x >= coin[i])
//             {
//                 sum += coin[i];

//                 if (sum > x)
//                 {
//                     sum -= coin[i];
//                     coin[i] = 0;
//                     sum += coin[i];
//                 }
//             }
//             // cout<<"SUM : "<<sum<<endl;
//         }
//         else if(x>63){
//             cout<<"No"<<endl;
//             return 0;
//            }
//         p = coin;

//         // cout<<coin[i]<<endl;

//         // if(coin[i]!=2){
//         //     flag = 1;
//         // }
//         // else if(coin[i]==2){
//         //     flag = 2;
//         // }
//     }
//     //  cout<<flag <<endl;
//     // cout<<"output : "<<endl;

//     for (int i = 0; i < p.size(); i++)
//     {
//         // cout<<p[i]<<" ";
//         if (p[i] == 2)
//         {
//             flag = 1;
//         }
//     }
//     // cout<<flag <<endl;
//     if (flag == 1)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {

//         cout << "No" << endl;
//     }
//     return 0;
// }

// // if(p[i]!=2){
// //     flag = 0;
// //    }
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll T, P;
    cin >> T >> P;
    ll x = P - T;

    // Check if the number 2 is used in the change (bitwise check)
    if (x & 2) {  // If 2^1 (binary 10) is set in x
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
