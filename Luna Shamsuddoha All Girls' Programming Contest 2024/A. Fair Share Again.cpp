#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    ll x, y;
    cin >> x >> y;
    ll ans = __gcd(x, y);
    ll ans2 = (x * y) / __gcd(x, y);
    if (ans == ans2)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}