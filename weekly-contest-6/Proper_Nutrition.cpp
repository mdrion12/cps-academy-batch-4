#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll n = 10000000;
ll a, b, c;
int search(int i)
{
    int l = 0, r = n;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll value = (b * mid) + (c * i);
        if (value == a)
        {
            return mid;
        }
        if (value > a)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;
    for (int i = 0; i <= n; i++)
    {
        ll val = search(i);
        if (val >= 0)
        {
            cout << "YES" << "\n";
            cout << val << " " << i << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n ";

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const ll n = 10000000;
// ll a, b, c;

// int search(int i) {
//     int l = 0, r = n;
//     while (l <= r) {
//         ll mid = l + (r - l) / 2;
//         ll value = (b * i) + (c * mid);
//         if (value == a) {
//             return mid;
//         }
//         if (value > a) {
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> a >> b >> c;

//     for (int i = 0; i * b <= a; i++) { // Stop when b * i > a
//         ll val = search(i);
//         if (val >= 0) { // val >= 0 implies a solution is found
//             cout << "YES" << "\n";
//             cout << i << " " << val << "\n";
//             return 0;
//         }
//     }
//     cout << "NO" << "\n";

//     return 0;
// }
