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
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll total = 0;
        for (int i = 0; i < n; i++)
            total += (a[i] / x) * y;

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll current = a[i] + (total - (a[i] / x) * y);
            ans = max(ans, current);
        }

        cout << ans << endl;
    }

    return 0;
}