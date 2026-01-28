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
        int n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        bool check = true;
        ll prev_max = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
            {
                check = false;
                break;
            }

            if (a[i] != b[i] && a[i] <= prev_max)
            {
                check = false;
                break;
            }

            prev_max = max(prev_max, a[i]);
        }

        cout << (check ? "Yes" : "No") << endl;
    }

    return 0;
}