#include <bits/stdc++.h>
using namespace std;
int t;
int v[100];
int partition(int v[], int l, int r)
{
    int pivort = v[l];
    int i = l;
    int j = r;
    while (i < j)
    {
        while (v[i] <= pivort)
        {
            i++;
        }
        while (v[j] > pivort)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    if (i > j)
    {
        swap(v[l], v[j]);
    }
    return j;
}
void quick_sort(int v[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(v, l, r);
        quick_sort(v, l, pi - 1);
        quick_sort(v, pi + 1, r);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    quick_sort(v, 0, t - 1);
    for (int i = 0; i < t; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}