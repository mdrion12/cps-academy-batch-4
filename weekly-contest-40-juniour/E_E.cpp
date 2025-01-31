#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> in_degree(N + 1, 0);
    vector<vector<int>> graph(N + 1);

    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        in_degree[B]++;
    }

    int strongest = -1;
    int count = 0;

    for (int i = 1; i <= N; i++)
    {
        if (in_degree[i] == 0)
        {
            count++;
            strongest = i;
        }
    }

    if (count == 1)
        cout << strongest << "\n";
    else
        cout << "-1\n";

    return 0;
}
