#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    ll x, t, s;
    cin >> x >> t >> s;
    ll p = t * s;
    if (p >= x)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}