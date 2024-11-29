#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    MTK;
    int n;
    string s;
    cin >> n >> s;

    string ans;
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n and s[i] == 'o' and s[i + 1] == 'c' and s[i + 2] == 'o')
        {
            int j = i + 3;
            while (j + 1 < n and s[j] == 'c' and s[j + 1] == 'o')
                j += 2;
            ans += "***";
            i = j - 1;
        }
        else
            ans += s[i];
    }
    cout << ans << '\n';
    return 0;
}
