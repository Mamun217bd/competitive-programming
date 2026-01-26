#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;

        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (s >= sum && (s - sum) % x == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}