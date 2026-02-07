#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    string s = to_string(n);
    int len = s.length();

    int dp[len + 1][k + 1][2];
    memset(dp, 0, sizeof(dp));

    dp[0][0][1] = 1;

    for (int pos = 0; pos < len; pos++)
    {
        int digit_n = s[pos] - '0';
        for (int sum = 0; sum <= k; sum++)
        {
            for (int tight = 0; tight <= 1; tight++)
            {
                if (dp[pos][sum][tight] == 0)
                    continue;

                int limit = tight ? digit_n : 9;

                for (int digit = 0; digit <= limit; digit++)
                {
                    int new_sum = sum + digit;
                    if (new_sum <= k)
                    {
                        int new_tight = tight && (digit == limit) ? 1 : 0;
                        dp[pos + 1][new_sum][new_tight] += dp[pos][sum][tight];
                    }
                }
            }
        }
    }

    int ans = dp[len][k][0] + dp[len][k][1];

    if (k == 0)
        ans--;

    cout << ans << endl;

    return 0;
}