#include <iostream>
#include <string>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    if (v1 == v2)
    {

        return (x1 == x2) ? "YES" : "NO";
    }

    int deltaX = x2 - x1;
    int deltaV = v1 - v2;

    if ((deltaX % deltaV == 0) && (deltaX / deltaV > 0))
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    cout << kangaroo(x1, v1, x2, v2) << endl;

    return 0;
}
