#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    ll n, k, flag = 1;
    cin >> n >> k;
    vector<ll> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        pair<ll, ll> po = {p[i], p[i + 1]};
        ll jesan = (po.first * po.second) % k;
        if (jesan != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}