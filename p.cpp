// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     long long n, k;
//     cin >> n >> k;
//     vector<long long> coins(n);
//     for (int i = 0; i < n; i++) {
//         cin >> coins[i];
//     }

//     // DP array to store min coins needed for each value up to k
//     const long long INF = 1e18;
//     vector<long long> dp(k + 1, INF);
//     dp[0] = 0;

//     for (int i = 1; i <= k; i++) {
//         for (int j = 0; j < n; j++) {
//             if (coins[j] <= i) {
//                 dp[i] = min(dp[i], dp[i - coins[j]] + 1);
//             }
//         }
//     }

//     if (dp[k] == INF) cout << -1 << endl;
//     else cout << dp[k] << endl;

//     return 0;
// }




//01 knack sax




// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     long long n, k;
//     cin >> n >> k;

//     vector<long long> coins(n);
//     for (int i = 0; i < n; i++) {
//         cin >> coins[i];
//     }

//     const long long INF = 1e18;
//     vector<long long> dp(k + 1, INF);
//     dp[0] = 0;

//     // Each coin used only once => loop through coins outer
//     for (int i = 0; i < n; i++) {
//         // Loop backward to prevent reusing the same coin
//         for (long long j = k; j >= coins[i]; j--) {
//             if (dp[j - coins[i]] != INF) {
//                 dp[j] = min(dp[j], dp[j - coins[i]] + 1);
//             }
//         }
//     }

//     if (dp[k] == INF) cout << -1 << endl;
//     else cout << dp[k] << endl;

//     return 0;
// }
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

    // Start from the largest coin and try to form the exact sum k
    int coinCount = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (coins[i] <= k) {
            k -= coins[i];
            coinCount++;
        }
        if (k == 0) break;
    }

    if (k == 0) {
        cout << coinCount << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
