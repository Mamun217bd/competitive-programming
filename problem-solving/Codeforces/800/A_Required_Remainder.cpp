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
        ll x, y, n;
        cin >> x >> y >> n;

        ll remainder = n % x;

        ll k;
        if (remainder >= y)
            k = n - (remainder - y);
        else
            k = n - (remainder + x - y);

        cout << k << endl;
    }

    return 0;
}