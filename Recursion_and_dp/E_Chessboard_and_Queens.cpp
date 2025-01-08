#include <bits/stdc++.h>
using namespace std;
#define ll long long
char arr[8][8];
int ld[30], rd[30], col[8];
int ans = 0;
void fn(int r)
{
    if (r >= 8)
    {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++)
    {
        if (arr[r][c] == '*')
            continue;
        if (col[c] == 1)
            continue;
        if (ld[r - c + 7] == 1)
            continue;
        if (rd[r + c] == 1)
            continue;

        ld[r - c + 7] = 1;
        rd[r + c] = 1;
        col[c] = 1;
        fn(r + 1);
        ld[r - c + 7] = 0;
        rd[r + c] = 0;
        col[c] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }
    fn(0);
    cout << ans << "\n";
    return 0;
}