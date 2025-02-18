#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fr(m) for (int i = 0; i < m; i++)
#define fro(m) for (int i = 1; i < m; i++)
#define frj(m) for (int j = 0; j < m; j++)
#define frr(n) for (int i = n; i >= 0; i--)
#define pb push_back
#define pf push_front
#define orr ||
#define nll '\n'
#define nl cout << '\n'
#define mod 1000000007
#define sci(n) scanf("%d", &n)
#define scl(n) scanf("%lld", &n)
#define pri(n) printf("%d\n", n)
#define prl(n) printf("%lld\n", n)
#define prc(n) printf("%c\n", n)
#define yes cout << "YES" << nll
#define no cout << "NO" << nll
#define inp freopen("input.txt", "r", stdin)
#define outp freopen("output.txt", "w", stdout)
#define debug(arr, n)           \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << " ";  \
    nl
#define debugr(arr, s, e)        \
    for (int i = s; i <= e; i++) \
        cout << arr[i] << " ";   \
    nl
#define debugm(arr, n, m)                    \
    fr(n)                                    \
    {                                        \
        frj(m) { cout << arr[i][j] << " "; } \
        nl;                                  \
    }
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define mxn 1000005

int arr[mxn], temp[mxn];

ll merge(int l, int mid, int r)
{
    int i = l, j = mid + 1, k = 0;
    ll inv = 0;
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++], inv += mid - i + 1;
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    k = 0;
    for (i = l; i <= r; i++)
        arr[i] = temp[k++];
    return inv;
}

ll msort(int l, int r)
{
    if (l == r)
    {
        return 0;
    }
    int mid = (l + r) / 2;
    ll a = msort(l, mid);
    ll b = msort(mid + 1, r);
    ll c = merge(l, mid, r);
    return a + b + c;
}

int main()
{
    fastio;
    int n;
    cin >> n;
    fr(n) cin >> arr[i];
    ll ans = msort(0, n - 1);
    cout << ans << nll;
    return 0;
}