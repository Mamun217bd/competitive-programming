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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max_streak = 0, current = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 1)
            {
                current++;
                max_streak = max(max_streak, current);
            }
            else
                current = 0;
        }

        cout << max_streak << endl;
    }

    return 0;
}