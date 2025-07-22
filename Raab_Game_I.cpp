/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define mem(dp, x) memset(dp, x, sizeof dp)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ties = n - a - b;
    n -= ties;

    if (a + b != n or n < 0 or ties < 0)
    {
        cout << "NO\n";
        return;
    }
    if (n >= 1 and (a == n or b == n))
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (int i = 1; i <= n + ties; i++)
        cout << i << ' ';
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int x = i + a;
        if (x > n)
            x -= n;
        cout << x << ' ';
    }
    for (int i = n + 1; i <= n + ties; i++)
        cout << i << ' ';
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}
