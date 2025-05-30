#include <bits/stdc++.h>
using namespace std;

int calculateFibonacciness(int a1, int a2, int a3, int a4, int a5)
{
    int fibonacciness = 0;
    if (a3 == a1 + a2)
        fibonacciness++;
    if (a4 == a2 + a3)
        fibonacciness++; //
    if (a5 == a3 + a4)
        fibonacciness++; //
    return fibonacciness;
}

int main()
{
    int t;
    cin >> t;
    vector<int> results;

    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int a3 = a4 - a2;
        int a32 = a5 - a4;

        int max_fibonacciness = 0;
        max_fibonacciness = max(max_fibonacciness, calculateFibonacciness(a1, a2, a3, a4, a5));
        max_fibonacciness = max(max_fibonacciness, calculateFibonacciness(a1, a2, a32, a4, a5));

        results.push_back(max_fibonacciness);
    }

    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}
