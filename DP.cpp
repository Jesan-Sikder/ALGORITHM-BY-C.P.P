#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9; // Large value for initialization

int main() {
    ll t, px;
    cin >> t >> px;
    ll x = px - t;  // Change amount

    vector<ll> coin = {1, 2, 4, 8, 16, 32};  
    vector<int> dp(x + 1, INF);  // DP array, initialized to large values
    dp[0] = 0; // Base case: 0 coins to make 0

    for (ll c : coin) {
        for (ll j = c; j <= x; j++) {
            dp[j] = min(dp[j], dp[j - c] + 1);
        }
    }

    cout << "Minimum coins needed: " << dp[x] << endl;
    return 0;
}
