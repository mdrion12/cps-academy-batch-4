#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    char v[a + 1][a + 1];

    // Input the grid (1-indexed)
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cin >> v[i][j];
        }
    }

    // Iterate over the grid
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (v[i][j] == '.')
            {
                int upore = 0, niche = 0, dan = 0, bam = 0;

                // Check upwards direction (limit to 'k-1' cells)
                for (int k = i - 1; k >= max(1, i - b + 1); k--)
                {
                    if (v[k][j] == '.')
                        upore++;
                    else
                        break;
                }

                // Check downwards direction (limit to 'k-1' cells)
                for (int n = i + 1; n <= min(a, i + b - 1); n++)
                {
                    if (v[n][j] == '.')
                        niche++;
                    else
                        break;
                }

                // Check right direction (limit to 'k-1' cells)
                for (int y = j + 1; y <= min(a, j + b - 1); y++)
                {
                    if (v[i][y] == '.')
                        dan++;
                    else
                        break;
                }

                // Check left direction (limit to 'k-1' cells)
                for (int z = j - 1; z >= max(1, j - b + 1); z--)
                {
                    if (v[i][z] == '.')
                        bam++;
                    else
                        break;
                }

                // Check if it's possible to place the ship of size 'b'
                if (upore + niche + 1 >= b || dan + bam + 1 >= b)
                {
                    cout << i << " " << j << "\n";
                    return 0;
                }
            }
        }
    }

    return 0;
}
