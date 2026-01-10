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
        int n, x;
        cin >> n >> x;
        n % 6 == 0 ? cout << (n / 6) * x << endl : cout << ((n / 6) + 1) * x << endl;
    }

    return 0;
}