/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<string> grid(8);
vector<bool> colAttacked(8), diagSum(16), diagDiff(16);
int ans;
void place(int row)
{
    if (row == 8)
    {
        ans++;
        return;
    }

    for (int col = 0; col < 8; col++)
    {
        if ((grid[row][col] != '*') and !colAttacked[col] and !diagSum[row + col] and !diagDiff[row - col + 7])
        {
            colAttacked[col] = 1;
            diagSum[row + col] = 1;
            diagDiff[row - col + 7] = 1;
            place(row + 1);
            colAttacked[col] = 0;
            diagSum[row + col] = 0;
            diagDiff[row - col + 7] = 0;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 8; i++)
        cin >> grid[i];

    place(0);

    cout << ans << endl;
}