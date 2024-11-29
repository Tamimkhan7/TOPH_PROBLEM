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
    string s;
    cin >> s;
    int n = s.size(), x;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            x = i;
    }
    bool ok = false;
    for (int i = x + 1; i < n; i++)
    {
        if (s[i] > '0')
            ok = true;
    }
    if (ok)
        cout << "Float" << '\n';
    else
        cout << "Integer" << '\n';
    return 0;
}