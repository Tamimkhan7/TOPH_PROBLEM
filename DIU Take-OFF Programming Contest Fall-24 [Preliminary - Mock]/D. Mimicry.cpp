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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int index = 0, ans = 0;
        int x = v[0];
        for (int j = 1; j < n; j++)
        {
            if (x == v[j])
            {
                x = v[j + 1];
                j++;
                ans++;
            }
        }
        cout << ans << '\n';
        if (ans % 2 == 0)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}