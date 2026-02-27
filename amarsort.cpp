#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{

    ll n;
    while (1)
    {
        cin >> n ;
        if(n== 0) break;
        
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    cout<<endl;
    return 0;
}