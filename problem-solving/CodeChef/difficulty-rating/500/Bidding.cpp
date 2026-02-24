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

        if (a > b && a > c)
            cout << "Alice" << endl;
        else if (b > a && b > c)
            cout << "Bob" << endl;
        else if (c > a && c > b)
            cout << "Charlie" << endl;
    }

    return 0;
}