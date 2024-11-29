#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        for (int i = 0; i < 3; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(all(v));
        ll x = v[2];
        ll val = v[0];
        val += v[1];
        if (val > x)
            cout << 0 << '\n';
        else
        {
            ll ans = x - val;
            cout << ++ans << '\n';
        }
    }
    return 0;
}