#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, px;
    cin >> t >> px;
    ll x = px - t;  

    vector<ll> coin = {25,13,9,7,2,1};  
    vector<bool> used(6,false);  

    for (int i = 0; i < coin.size(); i++) {
        while (x >= coin[i]) {  
            x -= coin[i];
            used[i] = true;  
        }
    }

    
    if (used[2]|| used[3]) {
        cout << "Happy" << endl;
    } else {
        cout << "Sad" << endl;
    }

    return 0;
}