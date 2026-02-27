#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, k;
    cin >> n >> k;

    vector<ll> size(n), value(n);
    for (int i = 0; i < n; i++) {
        cin >> size[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }

    // dp[i] will store the maximum value we can achieve with a box of capacity i
    vector<ll> dp(k + 1, 0);

    // Iterate over each product
    for (int i = 0; i < n; i++) {
        // Traverse the dp array backward to avoid reusing the same product in this iteration
        for (int j = k; j >= size[i]; j--) {
            dp[j] = max(dp[j], dp[j - size[i]] + value[i]);
        }
    }

    // The maximum value we can achieve with the given box size k
    ll max_value_in_box = dp[k];

    // Calculate the total value of products
    ll total_value = accumulate(value.begin(), value.end(), 0LL);

    // The value left in the shop is the difference between total value and the value in the box
    ll value_left_in_shop = total_value - max_value_in_box;

    cout << max_value_in_box << " " << value_left_in_shop << endl;

    return 0;
}
