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
        int a, b;
        cin >> a >> b;

        int c = a;
        int x = (c - a) + (b - c);
        c = b;
        int y = (c - a) + (b - c);

        if (a == b)
            cout << 0 << endl;
        else
            cout << min(x, y) << endl;
    }

    return 0;
}