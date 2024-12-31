#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    if (st.empty())
    {
        cout << "Empty String" << "\n";
    }
    else
    {
        string result = "";
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        cout << result << "\n";
    }

    return 0;
}
