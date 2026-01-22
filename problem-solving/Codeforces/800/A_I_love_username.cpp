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

    int mn = a[0], mx = a[0];
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            count++;
        }
        else if (a[i] > mx)
        {
            mx = a[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}