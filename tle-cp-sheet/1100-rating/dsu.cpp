#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
const int N = 1e5 + 9;
int parent[N];
int group_size[N];
int level[N];
void initiaize()
{
    for (int i = 0; i < N; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        group_size[leaderA] += group_size[leaderB];
        parent[leaderB] = leaderA;
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
void union_by_ranked(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    initiaize();
    union_by_ranked(1, 3);
    union_by_ranked(2, 3);
    union_by_ranked(4, 5);
    // union_by_ranked(5, 6);
    cout << dsu_find(1) << "\n";
    cout << dsu_find(2) << "\n";
    cout << dsu_find(4) << "\n";
    // cout << dsu_find(6) << "\n";

    return 0;
}