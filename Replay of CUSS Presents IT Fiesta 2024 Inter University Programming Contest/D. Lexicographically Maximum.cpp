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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            char ch;
            cin >> ch;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] < ch)
                {
                    cout << i + 1 << '\n';
                    s[i] = ch;
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << n << '\n';
        }
    }
    return 0;
}