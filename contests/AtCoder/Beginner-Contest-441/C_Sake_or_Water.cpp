#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    ll x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<ll>());

    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + a[i];

    for (int i = 1; i <= n; i++)
    {
        int min_cups = max(0, i - (n - k));
        if (min_cups == 0)
            continue;

        ll p = prefix[i] - prefix[i - min_cups];
        if (p >= x)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}