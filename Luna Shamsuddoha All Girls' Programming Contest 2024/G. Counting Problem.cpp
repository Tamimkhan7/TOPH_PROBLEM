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
    int p, q;
    cin >> p >> q;
    int a[q + 1];
    for (int i = 1; i <= q; i++)
        cin >> a[i];
    ll cnt = 0;
    sort(a + 1, a + q + 1);
    vector<int> v(1, 0);
    cnt += (p / a[1]);
    v.push_back(p / a[1]);
    for (int i = 2; i <= q; i++)
    {
        int x = v.back();
        cnt += (x - p / a[i]);
        // cout << x << ' ' << cnt << '\n';
        v.push_back(p / a[i]);
    }
    cout << cnt << '\n';
    return 0;
}
