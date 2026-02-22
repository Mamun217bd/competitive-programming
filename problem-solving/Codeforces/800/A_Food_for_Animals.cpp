#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int d = max(0, x - a);
        int e = max(0, y - b);

        if (d + e <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}