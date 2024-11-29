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

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int x = n;
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    // show(sum);
    if (is_prime(n) and is_prime(sum))
        cout << "Freedom!" << '\n';
    else
        cout << "Bad luck!" << '\n';
    return 0;
}