#include <bits/stdc++.h>

using namespace std;

#define N 200005

int a, b;
bool possible = false;

map<int, int> previous_number;

void dfs(long long n, int prev)
{
    if (n > b)
    {
        return;
    }

    previous_number[n] = prev;

    if (n == b)
    {
        possible = true;
        return;
    }

    dfs(2 * n, n);
    dfs(10 * n + 1, n);
}

int main()
{
    cin >> a >> b;

    dfs(a, 0);

    if (possible)
    {
        cout << "YES\n";

        vector<int> sequence;
        int n = b;
        while (1)
        {
            sequence.push_back(n);
            n = previous_number[n];
            if (n == a)
                break;
        }
        sequence.push_back(a);

        reverse(sequence.begin(), sequence.end());

        cout << sequence.size() << endl;
        for (int n : sequence)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
