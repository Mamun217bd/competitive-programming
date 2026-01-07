#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());

    int mxi, mni;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            mxi = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == mn)
        {
            mni = i;
            break;
        }
    }

    int ans = mxi + (n - 1 - mni);
    if (mxi > mni)
        ans--;

    cout << ans << endl;

    return 0;
}