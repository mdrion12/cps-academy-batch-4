#include <iostream>
#include <string>
#include <algorithm> // for min function
using namespace std;

// Minimum time calculate kora function
int minimum_time(const string &s, const string &t)
{
    // Common prefix er length ber kora
    int common_len = 0;
    int min_len = min(s.length(), t.length());

    // joto tuku common prefix ache seta ber kora
    for (int i = 0; i < min_len; i++)
    {
        if (s[i] == t[i])
        {
            common_len++;
        }
        else
        {
            break;
        }
    }

    // Mot time: s likhte time + t likhte time - 2 * common prefix + copy korar jonno 1 second
    int total_time = s.length() + t.length() - 2 * common_len + 1;
    return total_time;
}

int main()
{
    int q; // Test case er number
    cin >> q;

    while (q--)
    {
        string s, t;
        cin >> s >> t;

        cout << minimum_time(s, t) << endl;
    }

    return 0;
}
