#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // number of test cases
    while (T--)
    {
        int N;
        string S;
        cin >> N >> S; // read length of string and the string itself

        int count_of_ones = 0;
        for (char c : S)
        {
            if (c == '1')
            {
                count_of_ones++;
            }
        }

        if (count_of_ones == 0)
        {
            cout << N << "\n";
        }
        else if (count_of_ones % 2 == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << "1\n";
        }
    }

    return 0;
}
