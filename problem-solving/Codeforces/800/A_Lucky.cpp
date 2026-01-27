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
        string a;
        cin >> a;

        int n = 0, m = 0;
        for (int i = 0; i < 3; i++)
            n += a[i] - '0';
        for (int i = 3; i < 6; i++)
            m += a[i] - '0';

        if (n == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}