#include <bits/stdc++.h>
using namespace std;
#define ll long long
int v[500001];
int merge_count = 0;
void mergesort(int a[], int l, int r, int mid)
{
    int leftside = mid - l + 1;
    int rightside = r - mid;
    int left[leftside], right[rightside];
    int k = 0;
    for (int i = l; i <= mid; i++)
    {
        left[k] = a[i];
        k++;
    }
    k = 0;
    for (int j = mid + 1; j <= r; j++)
    {
        right[k] = a[j];
        k++;
    }
    int li = 0, ri = 0, cur = l;
    while (li < leftside && rightside > ri)
    {
        merge_count++;
        if (left[li] <= right[ri])
        {
            a[cur] = left[li];
            li++;
        }
        else
        {
            a[cur] = right[ri];
            ri++;
        }
        cur++;
    }
    while (li < leftside)
    {
        merge_count++;
        a[cur] = left[li];
        cur++;
        li++;
    }
    while (ri < rightside)
    {
        merge_count++;
        a[cur] = right[ri];
        cur++;
        ri++;
    }
}
void merge(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (r + l) / 2;

        merge(a, l, mid);
        merge(a, mid + 1, r);
        mergesort(a, l, r, mid);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, x;
    cin >> t >> x;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    merge(v, 0, t - 1);
    int i = 0, j = t - 1, gondolas = 0;
    while (i <= j)
    {
        if (v[i] + v[j] <= x)
        {
            i++;
        }
        j--;
        gondolas++;
    }
    cout << gondolas << "\n";

    return 0;
}