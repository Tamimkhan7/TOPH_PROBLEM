#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int long long
const int MOD = 1000000007;
const int MAXN = 10000;

vector<int> primes;
bool is_prime[MAXN + 1];

void sieve()
{
    mem(is_prime, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= MAXN; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= MAXN; j += i)
                is_prime[j] = false;
        }
    }
}

int factpw(int N, int p)
{
    int pw = 0;
    while (N > 0)
    {
        pw += N / p;
        N /= p;
    }
    return pw;
}

int cntdiv(int N)
{
    int res = 1;
    for (int p : primes)
    {
        if (p > N)
            break;
        int pw = factpw(N, p) * N;
        res = res * (pw + 1) % MOD;
    }
    return res;
}

int32_t main()
{
    MTK;
    sieve();

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << cntdiv(n) << "\n";
    }

    return 0;
}
