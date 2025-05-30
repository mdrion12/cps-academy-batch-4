#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";
int value(int a, int b)
{

    if (a == 0 || b == 0 || (a % 2 == 0 || b % 2 == 0))
        return a + b;
    else
        return a + b - 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;

        int optiona = value(a, b);
        int optionc = value(b, c);
        int optionb = value(a, c);
        cout << min({optiona, optionb, optionc}) << endl;
    }

    return 0;
}