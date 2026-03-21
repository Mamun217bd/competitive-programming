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
        vector<int> a(4);
        for (int i = 0; i < 4; i++)
            cin >> a[i];

        int m = max(a[0], a[1]);
        int n = max(a[2], a[3]);

        sort(a.begin(), a.end());

        if (m + n == a[2] + a[3])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}