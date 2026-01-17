#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p, q, x, y;
    cin >> p >> q >> x >> y;

    if (p <= x && x <= p + 99 && q <= y && y <= q + 99)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}