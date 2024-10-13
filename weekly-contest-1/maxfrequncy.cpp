#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int v[t];
    int max = INT_MIN;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
        if (max <= v[i])
        {
            max = v[i];
        }
    }
    int freq[max + 1] = {0};
    for (int i = 0; i < t; i++)
    {
        freq[v[i]]++;
    }
    int maxfreq = 0, maxcount = -1;
    for (int i = 0; i <= max; i++)
    {
        if (freq[i] >= maxfreq)
        {
            maxfreq = freq[i];
            maxcount = i;
        }
    }
    cout << maxcount << "\n";

    return 0;
}