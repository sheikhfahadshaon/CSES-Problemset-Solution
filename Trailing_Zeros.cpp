/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int twos = 0, fives = 0;
    int cnt = 1, t = 2, f = 5;
    while (f <= n)
    {
        fives += (n / f);
        f *= 5;
        cnt++;
    }
    cnt = 1;
    while (t <= n)
    {
        twos += (n / t);
        t *= 2;
        cnt++;
    }

    cout << min(twos, fives) << endl;
}