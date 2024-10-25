#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> numbers;
    string input;
    while (getline(cin, input))
    {
        stringstream s(input);
        long long num;
        while (s >> num)
        {
            numbers.push_back(num);
        }
    }

    cout << fixed << setprecision(4);
    for (int i = numbers.size() - 1; i >= 0; --i)
    {
        cout << sqrt(numbers[i]) << "\n";
    }

    return 0;
}