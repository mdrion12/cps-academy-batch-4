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

    set<char> st; // to store distinct lowercase letters
    int maxPrettySize = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // lowercase letter
        {
            st.insert(s[i]);
        }
        else // uppercase letter, reset the current set
        {
            maxPrettySize = max(maxPrettySize, (int)st.size()); // compare and store max size
            st.clear();                                         // reset for new segment
        }
    }

    // Check for the last segment
    maxPrettySize = max(maxPrettySize, (int)st.size());

    cout << maxPrettySize << "\n";

    return 0;
}
