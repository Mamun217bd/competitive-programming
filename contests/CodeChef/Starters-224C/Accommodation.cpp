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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        if (x + y > n)
        {
            cout << -1 << endl;
            continue;
        }

        ll max_r = min(b / x, g / y);

        if (max_r == 0)
        {
            cout << -1 << endl;
            continue;
        }

        ll min_r = (b + g + n - 1) / n;

        if (min_r <= max_r)
            cout << min_r << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}