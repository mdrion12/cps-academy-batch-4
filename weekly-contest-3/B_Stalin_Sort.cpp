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
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        stack<int> st;
        int k = 0;
        while (k < a - 1)
        {
            if (st.empty())
            {
                if (v[k] >= v[k + 1])
                {
                    st.push(v[k]);
                    st.push(v[k + 1]);
                    k += 2;
                }
                else
                {
                    int value = st.top();
                    if (v[k] <= value)
                    {
                        st.push(v[k]);
                        k++;
                    }
                }
            }
            else
            {
                k++;
            }
        }
        cout << min(a - st.size(), st.size()) << "\n";
    }

    return 0;
}