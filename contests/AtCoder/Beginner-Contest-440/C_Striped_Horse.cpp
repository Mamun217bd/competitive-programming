#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, w;
        cin >> n >> w;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int p = 2 * w;

        if (w >= n)
        {
            cout << 0 << endl;
            continue;
        }

        vector<ll> pos(p, 0);
        for (int i = 0; i < n; i++)
            pos[i % p] += v[i];

        ll current = 0;
        for (int i = 0; i < w; i++)
            current += pos[i];

        ll mn = current;
        for (int i = 1; i < p; i++)
        {
            current -= pos[i - 1];
            current += pos[(i + w - 1) % p];
            mn = min(mn, current);
        }

        cout << mn << endl;
    }

    return 0;
}