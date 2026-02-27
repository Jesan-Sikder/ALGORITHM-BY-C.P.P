//#BUbble sort
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int swapCount = 0;  // To count the number of swaps

//     // Bubble Sort Algorithm
//     for (int i = 0; i < n - 1; i++) {
//         bool swapped = false;  // Optimization: check if the array is already sorted
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {  // If elements are out of order
//                 swap(arr[j], arr[j + 1]);  // Swap them
//                 swapCount++;  // Increment swap count
//                 swapped = true;
//             }
//         }
//         if (!swapped) break;  // If no swaps in a pass, array is sorted
//     }

//     // Print the sorted array
//     cout << "Sorted Array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Print the total swap count
//     cout << "Total Swaps: " << swapCount << endl;
//     return 0;
// }
//#Selection Sort – Counting Swaps
/*#include <bits/stdc++.h>
using namespace std;

int selectionSort(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swapCount++;
        }
    }
    return swapCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int swaps = selectionSort(arr);
    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\nTotal Swaps: " << swaps << endl;

    return 0;
}
*/
//# Insertion Sort – Counting Swaps
/*#include <bits/stdc++.h>
using namespace std;

int insertionSort(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift elements
            j--;
            swapCount++;
        }
        arr[j + 1] = key;
    }
    return swapCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int swaps = insertionSort(arr);
    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\nTotal Swaps: " << swaps << endl;

    return 0;
}
*/
//#Merge Sort – Counting Inversions
// #include <bits/stdc++.h>
// using namespace std;

// long long merge(vector<int>& arr, int left, int mid, int right) {
//     vector<int> temp;
//     int i = left, j = mid + 1;
//     long long invCount = 0;

//     while (i <= mid && j <= right) {
//         if (arr[i] <= arr[j]) {
//             temp.push_back(arr[i++]);
//         } else {
//             temp.push_back(arr[j++]);
//             invCount += (mid - i + 1);  // Count inversions
//         }
//     }

//     while (i <= mid) temp.push_back(arr[i++]);
//     while (j <= right) temp.push_back(arr[j++]);

//     for (int k = left; k <= right; k++) arr[k] = temp[k - left];

//     return invCount;
// }

// long long mergeSort(vector<int>& arr, int left, int right) {
//     if (left >= right) return 0;

//     int mid = left + (right - left) / 2;
//     long long invCount = mergeSort(arr, left, mid);
//     invCount += mergeSort(arr, mid + 1, right);
//     invCount += merge(arr, left, mid, right);

//     return invCount;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     long long inversions = mergeSort(arr, 0, n - 1);
//     cout << "Sorted Array: ";
//     for (int num : arr) cout << num << " ";
//     cout << "\nTotal Inversions: " << inversions << endl;

//     return 0;
// }
//#Quick Sort – Counting Swaps
// #include <bits/stdc++.h>
// using namespace std;

// int partition(vector<int>& arr, int low, int high, int& swapCount) {
//     int pivot = arr[high], i = low - 1;
    
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//             swapCount++;
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     swapCount++;
//     return i + 1;
// }

// void quickSort(vector<int>& arr, int low, int high, int& swapCount) {
//     if (low < high) {
//         int pi = partition(arr, low, high, swapCount);
//         quickSort(arr, low, pi - 1, swapCount);
//         quickSort(arr, pi + 1, high, swapCount);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     int swapCount = 0;
//     quickSort(arr, 0, n - 1, swapCount);

//     cout << "Sorted Array: ";
//     for (int num : arr) cout << num << " ";
//     cout << "\nTotal Swaps: " << swapCount << endl;

//     return 0;
// }
