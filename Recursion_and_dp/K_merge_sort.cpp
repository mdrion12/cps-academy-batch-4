#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100001];
void merge(int a[], int l, int m, int r)
{
    int leftside = m - l + 1;
    int rightside = r - m;
    int left[leftside], right[rightside];
    int k = 0;
    for (int i = l; i <= m; i++)
    {
        left[k] = a[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        right[k] = a[i];
        k++;
    }
    int i = 0, j = 0, cur = l;
    while (i < leftside && rightside > j)
    {
        if (left[i] <= right[j])
        {
            a[cur] = left[i];
            i++;
            cur++;
        }
        else
        {
            a[cur] = right[j];

            j++;
            cur++;
        }
    }
    while (i < leftside)
    {
        a[cur] = left[i];
        i++;
        cur++;
    }
    while (j < rightside)
    {
        a[cur] = right[j];
        j++;
        cur++;
    }
}
void mergersort(int v[], int a, int b)
{
    if (a < b)
    {
        int mid = (a + b) / 2;
        for (int i = a; i <= mid; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        for (int i = mid + 1; i <= b; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        mergersort(v, a, mid);
        mergersort(v, mid + 1, b);
        merge(v, a, mid, b);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i;
    cin >> i;
    for (int j = 0; j < i; j++)
    {
        cin >> a[j];
    }

    mergersort(a, 0, i - 1);
    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}
