
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class valid
{
public:
    int a, b, c;
};
vector<valid> v{
    {0, 3, 6},
    {1, 1, 6},
    {1, 4, 4},
    {1, 2, 4},
    {2, 2, 2},
    {3, 3, 3},
    {0, 4, 4},
    {1, 3, 4},
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        vector<int> x(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i];
        }
        sort(x.begin(), x.end());
        bool f = false;
        for (int k = 0; k < v.size(); k++)
        {
            if (v[k].a == x[0] && v[k].b == x[1] && v[k].c == x[2])
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            cout << "Case " << i << ":" << " perfectus" << "\n";
        }
        else
        {
            cout << "Case " << i << ":" << " invalidum" << "\n ";
        }
    }

    return 0;
}