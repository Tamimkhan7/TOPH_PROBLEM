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
    int n;
    cin >> n;
    if (n == 5 || n == 6 || n == 12 || n == 13 || n == 19 || n == 20 || n == 26 || n == 27)
        cout << "YAPPY!!!" << '\n';
    else
        cout << "Oh no!" << '\n';
    return 0;
}