#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    const long long INF = 1e18;
    vector<long long> dp(k + 1, INF);
    dp[0] = 0;

    // Each coin used only once => loop through coins outer
    for (int i = 0; i < n; i++) {
        // Loop backward to prevent reusing the same coin
        for (long long j = k; j >= coins[i]; j--) {
            if (dp[j - coins[i]] != INF) {
                dp[j] = min(dp[j], dp[j - coins[i]] + 1);
            }
        }
    }

    if (dp[k] == INF) cout << -1 << endl;
    else cout << dp[k] << endl;

    return 0;
}
