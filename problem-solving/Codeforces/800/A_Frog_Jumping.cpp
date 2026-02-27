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
        ll a, b, k;
        cin >> a >> b >> k;

        if (k % 2 == 0)
            cout << (k / 2) * a - (k / 2) * b << endl;
        else
            cout << ((k + 1) / 2) * a - (k / 2) * b << endl;
    }

    return 0;
}