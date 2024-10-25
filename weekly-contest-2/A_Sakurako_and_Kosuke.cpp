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
        int n;
        cin >> n;

        // Determine the winner based on the parity of n
        if (n % 2 == 0)
        {
            cout << "Sakurako" << "\n"; // Sakurako wins for even n
        }
        else
        {
            cout << "Kosuke" << "\n"; // Kosuke wins for odd n
        }
    }

    return 0;
}
