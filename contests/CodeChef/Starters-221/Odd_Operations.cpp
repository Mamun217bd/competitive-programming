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
        ll n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << 0 << endl;
            continue;
        }

        bool checkOdd = false;
        vector<int> digits;
        ll temp = n;
        while (temp > 0)
        {
            int d = temp % 10;
            digits.push_back(d);
            if (d % 2 == 1)
                checkOdd = true;
            temp /= 10;
        }

        if (checkOdd)
        {
            cout << 1 << endl;
            continue;
        }

        if (digits.size() == 1)
        {
            cout << -1 << endl;
            continue;
        }

        bool checkOps = false;
        for (int d : digits)
        {
            if (d == 0)
                continue;

            ll x = n - d;
            if (x % 2 == 1)
            {
                cout << 1 << endl;
                checkOps = true;
                break;
            }

            ll y = x;
            while (y > 0)
            {
                if ((y % 10) % 2 == 1)
                {
                    cout << 2 << endl;
                    checkOps = true;
                    break;
                }
                y /= 10;
            }
            if (checkOps)
                break;
        }

        if (!checkOps)
            cout << 3 << endl;
    }

    return 0;
}
