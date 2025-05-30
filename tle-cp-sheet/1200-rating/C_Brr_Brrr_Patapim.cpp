

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[801][801];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        ll perm[1601] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll s = i + j + 2;

                if (perm[s] == 0)
                {
                    perm[s] = arr[i][j];
                }
            }
        }

        ll vr[1601] = {0};
        for (int s = 2; s <= 2 * n; s++)
        {
            vr[perm[s]] = 1;
        }

        for (int l = 1; l <= 2 * n; l++)
        {
            if (!vr[l])
            {
                perm[1] = l;
                break;
            }
        }

        for (int i = 1; i <= 2 * n; i++)
        {
            cout << perm[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
