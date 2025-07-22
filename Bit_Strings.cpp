/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

int BigMod(int a, int p, int mod = 1e9 + 7)
{
    int ans = 1;
    while (p)
    {
        if (p & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        p >>= 1;
    }

    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    cout << BigMod(2, n) << endl;
}