#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;

        ll l = x, r = x + y + n;
        ll ans = r;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2,
               forbidden_count = upper_bound(a.begin(), a.end(), mid) - lower_bound(a.begin(), a.end(), x),
               non_forbidden = (mid - x + 1) - forbidden_count;

            if (non_forbidden >= y)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << ans << endl;
    }

    return 0;
}