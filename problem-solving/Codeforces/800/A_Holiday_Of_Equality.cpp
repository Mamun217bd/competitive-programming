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

    int count = 0;
    for (int i = 0; i < n - 1; i++)
        count += (a[n - 1] - a[i]);

    cout << count << endl;

    return 0;
}