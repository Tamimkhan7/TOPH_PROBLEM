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
    int test;
    cin >> test;
    // priority_queue<int> q;
    // map<int, int, greater<int>> mp;
    vector<priority_queue<int, vector<int>, greater<int>>> v;
    while (test--)
    {
        int t, x;
        cin >> t >> x;
        if (t == 1)
            v.push(x);
        else
        {
            auto lw = lower_bound(all(v), x);
            cout << lw << '\n';
        }
    }
    return 0;
}