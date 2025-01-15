#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int val = 2e5 + 9;
int arr[val];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(arr, 0, sizeof(arr));

    int t;
    cin >> t;

    set<int> ss;
    vector<pair<int, int>> p;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
        ss.insert(a);
        ss.insert(b);
    }

    map<int, int> mp;
    int k = 1;
    for (auto it : ss)
    {
        mp[it] = k;
        k++;
    }

    for (int i = 0; i < p.size(); i++)
    {
        int l = p[i].first;
        int r = p[i].second;
        int i1 = mp[l];
        int i2 = mp[r];
        arr[i1] += 1;
        arr[i2] -= 1;
    }

    int mx = 0;
    for (int i = 1; i <= val - 5; i++)
    {
        arr[i] += arr[i - 1];
        mx = max(mx, arr[i]);
    }

    cout << mx << "\n";

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;

//     vector<pair<int, int>> v;

//     set<int> st;

//     for (int i = 1; i <= n; i++)
//     {
//         int l, r;
//         cin >> l >> r;

//         v.push_back({l, r});

//         st.insert(l);
//         st.insert(r);
//     }

//     map<int, int> mp;
//     int cnt = 1;

//     for (int x : st)
//     {
//         mp[x] = cnt;
//         cnt++;
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         v[i].first = mp[v[i].first];
//         v[i].second = mp[v[i].second];
//     }

//     int arr[2 * n + 5] = {0};

//     for (auto it : v)
//     {
//         arr[it.first]++;
//         arr[it.second]--;
//     }

//     int mx = 0;
//     for (int i = 1; i <= 2 * n; i++)
//     {
//         arr[i] += arr[i - 1];
//         mx = max(mx, arr[i]);
//     }

//     cout << mx << endl;

//     return 0;
// }