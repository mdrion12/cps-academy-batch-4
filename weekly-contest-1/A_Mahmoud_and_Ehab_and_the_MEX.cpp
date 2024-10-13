// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, x;
//     cin >> n >> x;
//     vector<int> value(101, 0);
//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         value[v[i]] = 1;
//     }

//     int ans = 0;

//     for (int i = 0; i < x; i++)
//     {
//         if (value[i] == 0)
//         {
//             ans++;
//         }
//     }

//     if (value[x] == 1)
//     {
//         ans++;
//     }

//     cout << ans << "\n";

//     return 0;
// }
