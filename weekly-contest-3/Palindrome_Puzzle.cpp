#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

vector<int> countPalindromicSubstrings(int n, const string &s, int q, const vector<tuple<int, int, int>> &queries)
{
    vector<int> result(n, 0);

    for (const auto &query : queries)
    {
        int l, r, k;
        tie(l, r, k) = query;
        l--, r--;

        map<char, int> freq;
        for (int i = l; i <= r; ++i)
        {
            freq[s[i]]++;
        }

        int odd_count = 0;
        for (const auto &f : freq)
        {
            if (f.second % 2 != 0)
                odd_count++;
        }

        if (odd_count / 2 <= k)
        {
            for (int len = 1; len <= r - l + 1; ++len)
            {
                result[len - 1]++;
            }
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int q;
    cin >> q;
    vector<tuple<int, int, int>> queries(q);
    for (int i = 0; i < q; ++i)
    {
        int l, r, k;
        cin >> l >> r >> k;
        queries[i] = make_tuple(l, r, k);
    }

    vector<int> result = countPalindromicSubstrings(n, s, q, queries);
    for (int count : result)
    {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
