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

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());

        vector<ll> pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + b[i - 1];

        ll ans = 0;
        for (int i = 0; i < n;)
        {
            ll x = a[i];
            int count = n - i,
                k = upper_bound(pre.begin(), pre.end(), count) - pre.begin() - 1;

            ans = max(ans, x * k);
            while (i < n && a[i] == x)
                i++;
        }

        cout << ans << endl;
    }

    return 0;
}