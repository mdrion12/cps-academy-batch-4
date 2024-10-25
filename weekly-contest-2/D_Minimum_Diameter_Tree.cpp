#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    vector<int> degree(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        degree[a]++;
        degree[b]++;
    }

    int leafCount = 0;
    for (int i = 1; i <= n; i++)
    {
        if (degree[i] == 1)
        {
            leafCount++;
        }
    }

    double minDiameter = (1.0 * s) / leafCount;
    minDiameter *= 2;

    cout.precision(18);
    cout << fixed << minDiameter << endl;

    return 0;
}
