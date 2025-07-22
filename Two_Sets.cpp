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
    int n;
    cin >> n;
    vector<int> a, b;
    int A = 0, B = 0;

    for (int i = n; i >= 1; i--)
    {
        if (A > B)
        {
            b.push_back(i);
            B += i;
        }
        else
        {
            a.push_back(i);
            A += i;
        }
    }

    if (A == B)
    {
        cout << "YES\n";

        cout << a.size() << endl;
        for (int i : a)
            cout << i << ' ';
        cout << endl;

        cout << b.size() << endl;
        for (int i : b)
            cout << i << ' ';
        cout << endl;
    }
    else
        cout << "NO\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}
