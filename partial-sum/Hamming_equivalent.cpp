// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// vector<int> v;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     for (int i = 0; i <= 18; i++)
//     {
//         int val = pow(2, i);
//         v.push_back(val);
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         vector<int> arr(a + 1);
//         for (int i = 1; i <= a; i++)
//         {
//             cin >> v[i];
//         }
//         bool f = true;
//         for (int i = 1; i <= a; i++)
//         {
//             if (arr[i] == i)
//             {
//                 continue;
//             }
//             else
//             {
//                 int value = arr[i];

//                 if (find(v.begin(), v.end(), arr[i]) != v.end())
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     f = false;
//                     break;
//                 }
//             }
//         }
//         if (f)
//         {
//             cout << "Yes" << "\n";
//         }
//         else
//         {
//             cout << "No" << "\n";
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> powersOfTwo;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i <= 18; i++)
    {
        int val = pow(2, i);
        powersOfTwo.push_back(val);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> arr(a + 1);

        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
        }

        bool valid = true;
        for (int i = 1; i <= a; i++)
        {
            if (arr[i] == i)
            {
                continue;
            }
            else
            {

                if (find(powersOfTwo.begin(), powersOfTwo.end(), arr[i]) != powersOfTwo.end())
                {
                    continue;
                }
                else
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
