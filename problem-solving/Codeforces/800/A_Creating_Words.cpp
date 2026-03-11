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
        string a, b;
        cin >> a >> b;

        char c = a[0];
        a[0] = b[0];
        b[0] = c;

        cout << a << " " << b << endl;
    }

    return 0;
}