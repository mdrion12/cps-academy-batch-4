#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        ll N, M, K;
        cin >> N >> M >> K;

        ll total = N * M;

        if (K == 0)
        {
            cout << total << "\n";
        }

        else
        {
            ll bb = total;

            ll nc = (K + (N - 1)) / N;
            if (nc <= M - 1)
            {
                ll sc = N * nc;
                bb = min(bb, sc);
            }

            ll nr = (K + (M - 1)) / M;
            if (nr <= N - 1)
            {
                ll sr = M * nr;
                bb = min(bb, sr);
            }

            cout << (total - bb) << "\n";
        }
    }

    return 0;
}
