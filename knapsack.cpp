#include <bits/stdc++.h>
using namespace std;

#define ll long long

// 0/1 Knapsack function
ll knapsack(int capacity, vector<int>& weights, vector<int>& values) {
    int n = weights.size();
    vector<ll> dp(capacity + 1, 0);

    // DP approach: Traverse items
    for (int i = 0; i < n; i++) {
        for (int j = capacity; j >= weights[i]; j--) {
            dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
        }
    }

    return dp[capacity];  // Maximum value that can be carried
}

int main() {
    int n, capacity;
    cin >> n >> capacity;

    vector<int> weights(n), values(n);
    for (int i = 0; i < n; i++) cin >> weights[i];
    for (int i = 0; i < n; i++) cin >> values[i];

    ll maxValue = knapsack(capacity, weights, values);
    
    cout << "Maximum value that can be taken: " << maxValue << endl;

    return 0;
}
