#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int swapCount = 0;  // To count the number of swaps

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Optimization: check if the array is already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // If elements are out of order
                swap(arr[j], arr[j + 1]);  // Swap them
                swapCount++;  // Increment swap count
                swapped = true;
            }
        }
        if (!swapped) break;  // If no swaps in a pass, array is sorted
    }

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Print the total swap count
    cout << "Total Swaps: " << swapCount << endl;
    return 0;
}
