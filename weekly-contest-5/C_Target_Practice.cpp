#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        char v[10][10]; // 0-based indexing for the grid
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> v[i][j];
            }
        }

        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                // Check which ring the arrow is in
                if (v[i][j] == 'X')
                {
                    if (i == 0 || i == 9)
                    { // Outer ring (score 1)
                        sum += 1;
                    }
                    else if (i == 1 || i == 8)
                    { // Second ring (score 2)
                        if (j >= 1 && j <= 8)
                        {
                            sum += 2;
                        }
                    }
                    else if (i == 2 || i == 7)
                    { // Third ring (score 3)
                        if (j >= 2 && j <= 7)
                        {
                            sum += 3;
                        }
                    }
                    else if (i == 3 || i == 6)
                    { // Fourth ring (score 4)
                        if (j >= 3 && j <= 6)
                        {
                            sum += 4;
                        }
                    }
                    else if (i == 4 || i == 5)
                    { // Inner ring (score 5)
                        if (j >= 4 && j <= 5)
                        {
                            sum += 5;
                        }
                    }
                }
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
