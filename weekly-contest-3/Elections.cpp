// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a >> b;
//         vector<int> A(a), B(a);
//         for (int i = 0; i < a; i++)
//         {
//             cin >> A[i];
//         }
//         for (int i = 0; i < a; i++)
//         {
//             cin >> B[i];
//         }
//         int count = 0;
//         vector<int> nm;
//         for (int i = 0; i < a; i++)
//         {
//             if (A[i] > B[i])
//             {
//                 count++;
//             }
//             else
//             {
//                 int value = B[i] - A[i]+1;
//                 nm.push_back(value);
//             }
//         }
//         if (count > a / 2)
//         {
//             cout << "YES" << "\n";
//         }
//         else
//         {
//             sort(nm.begin(), nm.end());
//             for (int i = 0; i < nm.size(); i++)
//             {
//                 if (nm[i] < b)
//                 {
//                     b -= nm[i];
//                     count++;
//                     if (count > a / 2)
//                     {
//                         break;
//                     }
//                 }
//                 else
//                     break;
//             }
//             if (count > a / 2)
//             {
//                 cout << "YES" << "\n";
//             }
//             else
//             {
//                 cout << "NO" << "\n";
//             }
//         }
//     }

//     return 0;
// }
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
        int n, x;
        cin >> n >> x;
        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        int count = 0;
        vector<int> deficits;

        for (int i = 0; i < n; i++)
        {
            if (A[i] > B[i])
            {
                count++;
            }
            else
            {
                int requiredVotes = B[i] - A[i] + 1;
                deficits.push_back(requiredVotes);
            }
        }

        if (count > n / 2)
        {
            cout << "YES" << "\n";
            continue;
        }

        sort(deficits.begin(), deficits.end());

        for (int i = 0; i < deficits.size() && x > 0; i++)
        {
            if (x >= deficits[i])
            {
                x -= deficits[i];
                count++;
            }
            else
            {
                break;
            }
            if (count > n / 2)
            {
                break;
            }
        }

        if (count > n / 2)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
