#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] >= a[k - 1])
            count++;
    }

    cout << count << endl;

    return 0;
}