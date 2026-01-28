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
        int n, x, k;
        cin >> n >> x >> k;

        int min_change = INT_MAX;

        for (int i = 0; i <= n; i += k)
            min_change = min(min_change, abs(x - i));

        cout << min_change << endl;
    }

    return 0;
}