#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimal_bacteria(int n, int K, vector<int> &a)
{
    // ব্যাকটেরিয়াগুলিকে সজ্জিত করা
    sort(a.begin(), a.end());

    // গ্রুপের সংখ্যা শুরুতে 1, প্রথম ব্যাকটেরিয়া থাকলে এটি একটি গ্রুপ
    int groups = 1;

    // প্রথম ব্যাকটেরিয়া থেকে পরবর্তী ব্যাকটেরিয়া পরীক্ষা করা
    for (int i = 1; i < n; ++i)
    {
        // যদি বর্তমান ব্যাকটেরিয়া আগের ব্যাকটেরিয়াকে গিলে নিতে পারে
        if (a[i] > a[i - 1] && a[i] <= a[i - 1] + K)
        {
            continue;
        }
        // যদি গিলে নেওয়া সম্ভব না হয়, নতুন একটি গ্রুপ শুরু করা
        else
        {
            groups++;
        }
    }

    return groups;
}

int main()
{
    int n, K;
    cin >> n >> K; // ব্যাকটেরিয়ার সংখ্যা ও K
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i]; // ব্যাকটেরিয়ার আকার
    }

    // আউটপুট দেওয়া
    cout << minimal_bacteria(n, K, a) << endl;

    return 0;
}
