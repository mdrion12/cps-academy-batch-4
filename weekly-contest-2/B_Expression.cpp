#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    // Calculate all possible outcomes without using parentheses
    int result1 = a + b + c;
    int result2 = a + b - c;
    int result3 = a - b + c;
    int result4 = a - b - c;
    int result5 = a * b + c;
    int result6 = a + b * c;
    int result7 = a * b - c;
    int result8 = a - b * c;
    int result9 = a * b * c;

    // Find the minimum result among all possible outcomes
    int min_result = min({result1, result2, result3, result4, result5, result6, result7, result8, result9});

    // Output the minimum result
    cout << min_result << endl;

    return 0;
}