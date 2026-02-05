#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0, mx = INT_MIN;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        count += (b - a);
        mx = max(mx, count);
    }

    cout << mx << endl;

    return 0;
}