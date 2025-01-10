#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int bun = n * 2;
        if (bun >= x)
            cout << bun - x << ' ';
        else
            cout << 0 << ' ';
        if (n >= y)
            cout << n - y << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}