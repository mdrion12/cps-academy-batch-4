#include <bits/stdc++.h>
using namespace std;
int maxGCDAfterReplacement(int n, vector<int> &arr)
{
    vector<int> prefixGCD(n + 1, 0), suffixGCD(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        prefixGCD[i] = __gcd(prefixGCD[i - 1], arr[i - 1]);
    }
    for (int i = n - 1; i >= 0; --i)
    {
        suffixGCD[i] = __gcd(suffixGCD[i + 1], arr[i]);
    }
    int maxGCD = 0;
    for (int i = 0; i < n; ++i)
    {

        int currentGCD = __gcd(prefixGCD[i], suffixGCD[i + 1]);
        maxGCD = max(maxGCD, currentGCD);
    }
    return maxGCD;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << maxGCDAfterReplacement(n, arr) << endl;

    return 0;
}
