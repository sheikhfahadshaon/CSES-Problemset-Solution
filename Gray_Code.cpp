/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<string> solution(int n)
{
    if (n == 1)
        return {"0", "1"};

    vector<string> a = solution(n - 1);
    vector<string> b = a;

    reverse(b.begin(), b.end());

    for (string &s : a)
        s += "0";
    for (string &s : b)
        s += "1";

    a.insert(a.end(), b.begin(), b.end());

    return a;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> ans = solution(n);

    for (string s : ans)
        cout << s << endl;
}