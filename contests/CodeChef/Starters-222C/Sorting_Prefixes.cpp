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
        
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int expected = n, ans = 0;

        for (int i = n; i >= 1; i--)
        {
            if (a[i] == expected)
                expected--;
            else
            {
                ans = a[i];
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
