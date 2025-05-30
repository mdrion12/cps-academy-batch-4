#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        ll ans = 0;
        ll l = 1;
        char prev = s[0];
        ll fst = 0, sst = 0;
        for (int i = 1; i < a; i++)
        {
            if (prev == s[i])
            {
                l++;
            }
            else
            {

                if (prev == '<')
                {
                    fst = max(fst, l);
                }
                else
                {
                    sst = max(sst, l);
                }
                prev = s[i];
                l = 1;
            }
        }
        if (prev == '<')
        {
            fst = max(fst, l);
        }
        else
        {
            sst = max(sst, l);
        }

        cout << max(fst, sst) + 1 << "\n";
    }

    return 0;
}