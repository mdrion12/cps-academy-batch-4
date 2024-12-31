#include <bits/stdc++.h>
using namespace std;

string isValid(string s)
{

    map<char, int> charCount;
    for (char c : s)
    {
        charCount[c]++;
    }

    map<int, int> freqCount;
    for (auto &p : charCount)
    {
        freqCount[p.second]++;
    }

    if (freqCount.size() == 1)
    {
        return "YES";
    }

    if (freqCount.size() == 2)
    {
        auto it = freqCount.begin();
        int firstFreq = it->first;
        int firstCount = it->second;
        ++it;
        int secondFreq = it->first;
        int secondCount = it->second;
        if ((firstFreq == 1 && firstCount == 1) || (secondFreq == 1 && secondCount == 1))
        {
            return "YES";
        }

        if (abs(firstFreq - secondFreq) == 1 && (firstCount == 1 || secondCount == 1))
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    cout << isValid(s) << "\n";

    return 0;
}
