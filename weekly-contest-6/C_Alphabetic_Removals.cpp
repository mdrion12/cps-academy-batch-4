#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<char> v(n);
    map<char, int> freq, rem;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
        rem[v[i]]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (k > 0)
        {
            if (rem[i] < k)
            {
                k -= rem[i];
                rem[i] = 0;
            }
            else
            {
                rem[i] -= k;
                k = 0;
            }
        }
        else
        {
            break;
        }
    }
    string x = "";
    for (int i = 0; i < n; i++)
    {
        if (freq[v[i]] > rem[v[i]])
        {
            freq[v[i]]--;
        }
        else if (freq[v[i]] == rem[v[i]])
        {
            x += v[i];
        }
    }
    cout << x << "\n";

    return 0;
}