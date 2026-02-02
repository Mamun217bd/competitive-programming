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

        bool check = true;
        sort(a.begin(), a.end());

        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) > 1)
            {
                check = false;
                break;
            }
        }

        check ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}