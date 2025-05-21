
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 10004 + 2;
int vis[N];
int level[N];
void initialize()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = -1;
        level[i] = 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    initialize();
    vis[n] = 1;
    level[n] = 0;
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        int left = par - 1;
        int right = par * 2;
        if (left > 0)
        {
            if (vis[left] == -1)
            {
                q.push(left);
                vis[left] = 1;
                level[left] = level[par] + 1;
            }
        }
        if (right <= N)
        {
            if (vis[right] == -1)
            {
                q.push(right);
                vis[right] = 1;
                level[right] = level[par] + 1;
            }
        }
    }
    cout << level[m] << "\n";

    return 0;
}