#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    int n;
    while (cin >> n && n != 0)
    {

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}