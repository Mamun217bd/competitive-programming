#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    sort(a.begin(), a.end());
    vector<ll> ans;

    for (int k = (n + 1) / 2; k <= n; k++)
    {
        if (s % k != 0)
            continue;
        ll p = s / k;

        if (a.back() > p)
            continue;

        int need = 2 * k - n;
        int count_p = upper_bound(a.begin(), a.end(), p) - lower_bound(a.begin(), a.end(), p);

        if (count_p < need)
            continue;

        vector<ll> b;
        int removed = 0;
        for (auto x : a)
        {
            if (x == p && removed < need)
                removed++;
            else
                b.push_back(x);
        }

        int l = 0, r = b.size() - 1;
        bool check = true;
        while (l < r)
        {
            if (b[l] + b[r] == p)
            {
                l++;
                r--;
            }
            else
            {
                check = false;
                break;
            }
        }

        if (check)
            ans.push_back(p);
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i < (int)ans.size(); i++)
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}