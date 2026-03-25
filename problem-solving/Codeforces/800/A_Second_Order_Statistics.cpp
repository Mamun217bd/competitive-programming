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

    sort(a.begin(), a.end());

    int min_val = a[0], second_min_val = INT_MAX;
    bool found = false;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > min_val)
        {
            second_min_val = a[i];
            found = true;
            break;
        }
    }

    if (found)
        cout << second_min_val << endl;
    else
        cout << "NO" << endl;

    return 0;
}