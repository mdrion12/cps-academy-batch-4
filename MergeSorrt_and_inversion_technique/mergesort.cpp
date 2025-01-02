#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int leftsize = m - l + 1;
    int rightsize = r - m;
    int L[leftsize], R[rightsize];
    int k = 0;
    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i < r; i++)
    {
        R[i] = a[k];
        k++;
    }
    int i = 0, j = 0, cur = l;
    while (i < leftsize && j < rightsize)
    {
        if (L[i] <= R[j])
        {
            a[cur] = L[i];
            i++;
        }
        else
        {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }
    while (i < leftsize)
    {
        a[cur] = L[i];
        i++;
        cur++;
    }
    while (j < rightsize)
    {
        a[cur] = R[j];
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int v[t];
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    merge_sort(v, 0, t - 1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}