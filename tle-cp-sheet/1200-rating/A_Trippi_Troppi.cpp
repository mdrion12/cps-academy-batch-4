#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b, c;
        cin >> a >> b >> c;

        cout << (char)tolower(a[0]) << (char)tolower(b[0]) << (char)tolower(c[0]) << endl;
    }

    return 0;
}
