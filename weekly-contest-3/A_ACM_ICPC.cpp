#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum = 0;
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0)
    {
        sum = sum / 2;
        bool f = false;
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++) // j starts from i+1 to ensure distinct indices
            {
                for (int k = j + 1; k < 6; k++) // k starts from j+1 to ensure distinct indices
                {
                    int x = v[i] + v[j] + v[k];
                    if (x == sum)
                    {
                        f = true;
                        break; // If a valid triplet is found, no need to check further
                    }
                }
                if (f)
                    break; // If found, exit the second loop
            }
            if (f)
                break; // If found, exit the first loop
        }
        if (f)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
