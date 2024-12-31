#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char a, b;
    cin >> a >> b;
    int n;
    cin >> n;

    vector<char> v{'v', '<', '^', '>'}; // ভেক্টর ঠিক করা হয়েছে

    int index = 0;

    // স্টার্টিং ক্যারেক্টারের ইনডেক্স খুঁজে বের করা
    for (int i = 0; i < 4; i++) // ইনডেক্স 0 থেকে শুরু
    {
        if (v[i] == a)
        {
            index = i;
            break;
        }
    }

    // Clockwise ক্যালকুলেশন
    int value = index + (n % 4); // সরাসরি যোগ করা
    if (value > 3)               // যদি রেঞ্জের বাইরে চলে যায়
    {
        value -= 4; // ৪ দিয়ে অ্যাডজাস্ট করা
    }

    // Anti-clockwise ক্যালকুলেশন
    int anticlock = index - (n % 4); // সরাসরি বিয়োগ
    if (anticlock < 0)               // নেতিবাচক হলে অ্যাডজাস্ট করা
    {
        anticlock += 4;
    }

    // ফলাফল নির্ধারণ
    if (v[value] == b && v[anticlock] == b)
    {
        cout << "undefined\n";
    }
    else if (v[value] == b)
    {
        cout << "cw\n";
    }
    else if (v[anticlock] == b)
    {
        cout << "ccw\n";
    }
    else
    {
        cout << "Undefined\n";
    }

    return 0;
}
