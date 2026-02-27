#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> p(n);
    
   
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    ll x, q, r;
    cin >> x >> q >> r;
  
    set<ll> values(p.begin(), p.end());
    
    
    if (values.count(x) == 0) x = 0;
    if (values.count(q) == 0) q = 0;
    if (values.count(r) == 0) r = 0;
    
 
    if (x > 0 && q > 0 && r > 0) {
        cout << x * q * r << endl;
    } else {

        cout << x + q + r << endl;
    }

    return 0;
}
