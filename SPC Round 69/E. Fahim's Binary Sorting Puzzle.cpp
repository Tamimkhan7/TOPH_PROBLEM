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
        string s;
        cin >> s;
        int n = s.size();
        vector<int> one, zero;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one.push_back(i + 1);
            else
                zero.push_back(i + 1);
        }
        // for (auto x : one)
        //     cout << x << ' ';
        // cout << '\n';
        int ans = 0;
        reverse(all(one));
        for (int i = 0, x = n; i < one.size(); i++, x--)
            ans += abs(x - one[i]);
        for (int i = 0, x = 1; i < zero.size(); i++, x++)
            ans += abs(x - zero[i]);
        cout << ans / 2 << '\n';
    }
    return 0;
}