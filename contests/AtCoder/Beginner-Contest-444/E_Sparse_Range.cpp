#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll d;
    cin >> n >> d;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<ll> ms;
    ll ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {

        auto it = ms.insert(a[r]);
        auto invalid = [&]()
        {
            if (ms.size() <= 1)
                return false;

            auto it2 = it;
            if (it2 != ms.begin())
            {
                auto prev_it = prev(it2);
                if (*it2 - *prev_it < d)
                    return true;
            }

            auto next_it = next(it2);
            if (next_it != ms.end())
            {
                if (*next_it - *it2 < d)
                    return true;
            }
            return false;
        };

        while (invalid())
        {
            auto rem = ms.find(a[l]);
            ms.erase(rem);
            l++;
            if (ms.find(a[r]) == ms.end())
                break;
            it = ms.find(a[r]);
        }

        ans += (r - l + 1);
    }

    cout << ans << endl;

    return 0;
}