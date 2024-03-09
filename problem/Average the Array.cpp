#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 5e5;
int a[N], n, pre[N];
vector<double> v;

void solve()
{
    int x;
    cin >> x;
    int ans = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        cerr << mid << '\n';
        if (v[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << '\n';
}

int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pre[-1] = 0;
    for (int i = 0; i < n; i++)
        pre[i] = pre[i - 1] + a[i];
    for (int i = 0; i < n; i++)
    {
        double ans = ((double)pre[i] / (i + 1));
        v.push_back(ans);
    }
    for (int i = 0; i < n; i++)
        cout << fixed << setprecision(1) << v[i] << ' ' << endl;
    cout << '\n';
    int q;
    cin >> q;
    while (q--)
        solve();

    return 0;
}
