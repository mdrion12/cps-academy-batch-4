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
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    cout << count0 << " " << count1 << "\n";

    return 0;
}