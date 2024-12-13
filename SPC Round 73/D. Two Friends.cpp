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
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Case " << ++cs << ": ";
        if (n == 1)
            cout << "CodeMask" << '\n';
        else if (n == 2)
            cout << "CodeNewtons" << '\n';
        else if (n % 2 == 0)
            cout << "CodeMask" << '\n';
        else
            cout << "CodeNewtons" << '\n';
    }
    return 0;
}
