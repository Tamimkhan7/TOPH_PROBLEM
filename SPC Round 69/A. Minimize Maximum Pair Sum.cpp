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
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        sort(all(v));
        int mx = 0;
        for (int l = 1, r = n; l < r; l++, r--)
        {
            // cout << v[l] << ' ' << v[r] << '\n';
            mx = max(mx, (v[r] + v[l]));
        }
        cout << mx << '\n';
    }
    return 0;
}