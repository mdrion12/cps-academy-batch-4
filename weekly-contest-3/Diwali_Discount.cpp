#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if (B >= A)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << A - B << endl;
    }
    return 0;
}
