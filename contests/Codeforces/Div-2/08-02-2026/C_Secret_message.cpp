#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<string> strips(k);
        for (int i = 0; i < k; i++)
            cin >> strips[i];

        vector<int> mask(n, 0);
        for (int i = 0; i < n; i++)
        {
            int m = 0;
            for (int j = 0; j < k; j++)
                m |= (1 << (strips[j][i] - 'a'));
            mask[i] = m;
        }

        string ans;
        for (int p = 1; p <= n; p++)
        {
            if (n % p != 0)
                continue;

            bool check = true;
            vector<int> common(p, (1 << 26) - 1);
            for (int i = 0; i < n; i++)
            {
                common[i % p] &= mask[i];
                if (common[i % p] == 0)
                {
                    check = false;
                    break;
                }
            }

            if (!check)
                continue;

            ans.resize(n);
            for (int r = 0; r < p; r++)
            {
                int bit = __builtin_ctz(common[r]);
                char c = 'a' + bit;
                for (int i = r; i < n; i += p)
                    ans[i] = c;
            }
            break;
        }

        cout << ans << endl;
    }

    return 0;
}