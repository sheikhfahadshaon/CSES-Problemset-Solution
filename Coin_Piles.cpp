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
    int a, b;
    cin >> a >> b;

    if ((a + b) % 3 == 0 and a <= 2 * b and b <= 2 * a)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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