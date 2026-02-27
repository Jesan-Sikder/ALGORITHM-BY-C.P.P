#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main() {
    ll n;
    cin >> n;
    vector<ll> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    ll x, q, r;
    cin >> x >> q >> r;
    
    // Using sets to check if x, q, r are in the array
    set<ll> values(p.begin(), p.end());
    
    // Check if x, q, r are all present in the set
    bool found_x = values.count(x);
    bool found_q = values.count(q);
    bool found_r = values.count(r);
    
    // If all are found, return their product, otherwise return their sum
    if (found_x && found_q && found_r) {
        cout << x * q * r << endl;
    } else {
        cout << x + q + r << endl;
    }

    return 0;
}
