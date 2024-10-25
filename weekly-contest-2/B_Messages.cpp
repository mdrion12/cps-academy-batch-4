#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, A, B, C, T;
    cin >> n >> A >> B >> C >> T;

    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int result = 0;

    // যদি C - B > 0 হয়, তখন T মিনিটে মেসেজগুলো পড়া লাভজনক
    if (C > B)
    {
        for (int i = 0; i < n; i++)
        {
            result += A + (T - t[i]) * (C - B);
        }
    }
    // যদি C - B <= 0 হয়, মেসেজ আসার সময়েই পড়া লাভজনক
    else
    {
        result = n * A; // প্রতিটি মেসেজ আসার সঙ্গে সঙ্গেই পড়ে নেওয়া হবে
    }

    cout << result << endl;
    return 0;
}
