#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void push_to_stack(int y)
{
    v.push_back(y);
}
int pop_to_stack()
{
    if (!(v.empty()))
    {
        int x = v.back();
        v.pop_back();
        return x;
    }
    else
    {
        return -1;
    }
}
void print_maximum()
{
    if (v.empty())
    {
        cout << "-1" << "\n";
    }
    else
    {
        int maximum = INT_MIN;
        for (int i = 0; i < v.size(); i++)
        {
            maximum = max(maximum, v[i]);
        }
        cout << maximum << "\n";
    }
}
void print_top_element()
{
    if (v.empty())
    {
        cout << "-1" << "\n";
    }
    else
    {
        int x = v.back();
        cout << x << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int v;
            cin >> v;
            push_to_stack(v);
        }
        else if (a == 2)
        {
            int x = pop_to_stack();
            cout << x << "\n";
        }
        else if (a == 3)
        {
            print_maximum();
        }
        else if (a == 4)
        {
            print_top_element();
        }
    }

    return 0;
}