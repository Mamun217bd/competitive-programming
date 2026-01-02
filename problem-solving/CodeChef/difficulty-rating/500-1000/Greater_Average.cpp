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
        int a, b, c;
        cin >> a >> b >> c;

        float avg = (a + b) / 2.0;

        if (avg > c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}