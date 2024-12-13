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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int sum = 0;    
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    for (int i = a; i <= b; i++)
        sum += v[i];
    cout << sum << '\n';
    return 0;
}