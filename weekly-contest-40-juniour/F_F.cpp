#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N);
    ll sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum += A[i];
    }

    // Target values
    ll target1 = sum / N;
    ll target2 = target1 + 1;

    // Count how many should be target1 and how many should be target2
    ll count1 = 0, count2 = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < target1)
        {
            count1++;
        }
        else if (A[i] > target2)
        {
            count2++;
        }
    }

    // Calculate the number of operations needed to make the values close to target
    ll operations = 0;
    operations = max(count1, count2);

    cout << operations << "\n";
    return 0;
}
