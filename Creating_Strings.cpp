/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> cnt(26, 0);
int n;
string s = "";

void solve()
{
    if (s.size() == n)
    {
        cout << s << endl;
        return;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            cnt[i]--;
            s.push_back('a' + i);
            solve();
            s.pop_back();
            cnt[i]++;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int fact[9];
    fact[0] = 1;
    for (int i = 1; i <= 8; i++)
        fact[i] = i * fact[i - 1];

    string ss;
    cin >> ss;
    for (char c : ss)
        cnt[c - 'a']++;
    n = ss.size();

    int ans = fact[n];
    for (int i = 0; i < 26; i++)
        ans /= fact[cnt[i]];

    cout << ans << endl;

    solve();
}