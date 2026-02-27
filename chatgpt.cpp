#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, px;
    cin >> t >> px;
    ll x = px - t;  // Change amount

    vector<ll> coin = {32, 16, 8, 4, 2, 1};  // Available coins
    vector<bool> used(6, false);  // Track which coins are used

    for (int i = 0; i < coin.size(); i++) {
        if (x >= coin[i]) {  // If we can use this coin
            x -= coin[i];
            used[i] = true;  // Mark it as used
        }
    }

    // If the 2-coin (index 4 in `coin` array) is used, print "Yes"
    if (used[4]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, px;
    cin >> t >> px;
    ll x = px - t;  // Change amount
    vector<ll> coin = {32, 16, 8, 4, 2, 1};  // Available coins

    bool foundTwo = false;

    for (ll c : coin) {
        if (x >= c) {  // If we can use this coin
            x -= c;
            if (c == 2) foundTwo = true;  // Check if 2 is used
        }
    }

    cout << (foundTwo ? "Yes" : "No") << endl;
    return 0;
}
*/