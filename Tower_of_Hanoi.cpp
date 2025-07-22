/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(int n, int a, int c)
{
    int b = 6 - a - c;

    if (n == 0)
        return;

    solve(n - 1, a, b);
    cout << a << ' ' << c << endl;
    solve(n - 1, b, c);
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    cout << (1 << n) - 1 << endl;
    solve(n, 1, 3);
}