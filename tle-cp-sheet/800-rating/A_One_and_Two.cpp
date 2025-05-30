#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    int total_twos = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            total_twos++;
        }
    }

    if (total_twos == 0)
    {
        // যদি কোনো `2` না থাকে, তাহলে যেকোনো ইন্ডেক্স বিভাজনের জন্য যথেষ্ট
        cout << "1\n";
        return;
    }

    int left_twos = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 2)
        {
            left_twos++;
        }

        int right_twos = total_twos - left_twos;

        if (left_twos == right_twos)
        {
            cout << i << "\n";
            return;
        }
    }

    cout << "-1\n"; // যদি কোনো `i` না পাওয়া যায়
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
