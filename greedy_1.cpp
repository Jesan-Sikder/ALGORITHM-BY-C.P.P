// // #include <iostream>
// // using namespace std;

// // int maxCigarettes(int n, int k) {
// //     int total = n; // Start with n cigarettes
// //     int butts = n; // Butts accumulated from smoking

// //     while (butts >= k) {
// //         int newCigarettes = butts / k; // Roll new cigarettes
// //         total += newCigarettes;       // Add new cigarettes to total
// //         butts = butts % k + newCigarettes; // Remaining butts + new butts
// //     }

// //     return total;
// // }

// // int main() {
// //     int n, k;
// //     while (cin >> n >> k) { // Read input until end of file
// //         cout << maxCigarettes(n, k) << endl;
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// int main() {
//     int n, k; // n = starting cigarettes, k = butts needed for a new one
    
//     while (cin >> n >> k) { // Keep reading pairs of n and k
//         int total = n; // Total number of cigarettes Peter can smoke
//         int butts = n; // The leftover butts from smoking
        
//         while (butts >= k) { // As long as there are enough butts for a new cigarette
//             int newCigarettes = butts / k; // Calculate how many new cigarettes we can roll
//             total += newCigarettes;       // Add them to the total smoked
//             butts = butts % k + newCigarettes; // Update the number of butts
//         }
        
//         cout << total << endl; // Output the result for this pair
//     }

//     return 0
// }
#include<iostream>

using namespace std;
int main(){
    int n,k;
    while(cin>>n>>k){
        int total=n, buts=n;
        while(buts>=k){
            int new_cigar =buts/k;
            total +=new_cigar;
            buts = buts % k + new_cigar;
        }
        cout<<total<<endl;
    }
}

