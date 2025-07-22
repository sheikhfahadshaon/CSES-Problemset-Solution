/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int sz;
    cin >> sz;

    for (int n = 1; n <= sz; n++)
    {
        int maxWays = (n * n) * ((n * n) - 1) / 2;
        int badWays = 0;
        badWays += 8 * (n - 4) * (n - 4);
        badWays += 6 * (n - 4) * 4;
        badWays += 4 * (n - 3) * 4;
        badWays += 3 * 8;
        badWays += 2 * 4;

        cout << maxWays - badWays / 2 << endl;
    }
}

// 23444444432
// 34666666643
// 46888888864
// 46888888864
// 46888888864
// 46888888864
// 46888888864
// 46888888864
// 46888888864
// 34666666643
// 23444444432