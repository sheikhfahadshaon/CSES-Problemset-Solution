/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

int ans = __LONG_LONG_MAX__;
int n;
int a[22];
void f(int ind, int d)
{
    if (ind == n)
    {
        ans = min(ans, abs(d));
        return;
    }

    f(ind + 1, d + a[ind]);
    f(ind + 1, d - a[ind]);
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    f(0, 0);

    cout << ans << endl;
}