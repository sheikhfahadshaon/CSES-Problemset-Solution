/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        int cnt = 0;
        while (c == s[i])
        {
            i++, cnt++;
        }
        i--;
        ans = max(ans, cnt);
    }

    cout << ans << endl;
}