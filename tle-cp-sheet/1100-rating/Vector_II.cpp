#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> arrays(n);

    while (q--)
    {
        int type, t;
        cin >> type >> t;

        if (type == 0)
        {
            int x;
            cin >> x;
            arrays[t].push_back(x);
        }
        else if (type == 1)
        {
            if (!arrays[t].empty())
            {
                for (int i = 0; i < arrays[t].size(); i++)
                {
                    if (i > 0)
                        cout << " ";
                    cout << arrays[t][i];
                }
            }
            cout << "\n";
        }
        else if (type == 2)
        {
            arrays[t].clear();
        }
    }

    return 0;
}
