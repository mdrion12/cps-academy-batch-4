#include <iostream>
#include <vector>
#include <cstring> // memset ফাংশন ব্যবহারের জন্য

using namespace std;

vector<int> tree[100005];
int subtree_size[100005];
bool visited[100005];
int parent[100005];

int dfs(int node)
{
    visited[node] = true;
    int size = 1;
    for (int child : tree[node])
    {
        if (!visited[child])
        {
            parent[child] = node;
            size += dfs(child);
        }
    }
    subtree_size[node] = size;
    return size;
}

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(parent, -1, sizeof(parent));
    memset(visited, false, sizeof(visited));

    dfs(1);

    int cuts = 0;
    for (int i = 2; i <= n; i++)
    {
        if (subtree_size[i] % 2 == 0)
        {
            cuts++;
        }
    }

    cout << cuts << endl;

    return 0;
}
