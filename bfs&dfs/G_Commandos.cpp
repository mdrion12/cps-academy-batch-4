#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

vector<int> bfs(int start, const vector<vector<int>> &adj, int n)
{
    vector<int> dist(n, -1);
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

int main()
{
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        int N, R;
        cin >> N >> R;

        vector<vector<int>> adj(N);
        for (int i = 0; i < R; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int s, d;
        cin >> s >> d;

        vector<int> distFromS = bfs(s, adj, N);
        vector<int> distToD = bfs(d, adj, N);

        int maxTime = 0;
        for (int i = 0; i < N; i++)
        {
            int totalTime = distFromS[i] + distToD[i];
            if (totalTime > maxTime)
                maxTime = totalTime;
        }

        cout << "Case " << tc << ": " << maxTime << endl;
    }

    return 0;
}
