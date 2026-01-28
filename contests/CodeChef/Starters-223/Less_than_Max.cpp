#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> dp(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                dp[1]++;
            else
            {
                if (dp[a[i] - 1] > 0)
                    dp[a[i]]++;
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += dp[i];

        cout << ans << endl;
    }

    return 0;
}