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
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int total = 0;
        for (int i = 0; i < n; i++)
            total += a[i];

        int min_dif = a[0] - b[0];
        for (int i = 1; i < n; i++)
            min_dif = min(min_dif, a[i] - b[i]);

        cout << total - min_dif << endl;
    }

    return 0;
}