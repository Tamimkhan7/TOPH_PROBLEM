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
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll m, p, n;
        cin >> m >> p >> n;
        cout << "Case " << ++cs << ": ";
        ll x = m * 100;
        ll y = p * n;
        if (x >= y)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}