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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 2), b(n + 2), c(n + 2);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        for (int i = 1; i <= n; i++)
            c[i] = max(a[i], b[i]);

        vector<ll> best(n + 3, 0);
        for (int i = n; i >= 1; i--)
            best[i] = max(c[i], best[i + 1]);

        vector<ll> pre(n + 2, 0);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + best[i];

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            cout << pre[r] - pre[l - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}