#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -1));
        dp[0][0] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (dp[i - 1][j] == -1)
                    continue;

                int taken = j + 1;

                for (int s = 0; s <= 2; s++)
                {
                    if (s <= taken)
                    {
                        int new_taken = taken - s;
                        dp[i][new_taken] = max(dp[i][new_taken], dp[i - 1][j] + s * a[i]);
                    }
                }
            }
        }

        ll ans = 0;
        for (int j = 0; j <= n; j++)
            ans = max(ans, dp[n][j]);

        cout << ans << endl;
    }

    return 0;
}