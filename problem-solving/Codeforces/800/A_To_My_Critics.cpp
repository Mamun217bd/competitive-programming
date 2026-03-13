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
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b < 10 && a + c < 10 && b + c < 10)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}