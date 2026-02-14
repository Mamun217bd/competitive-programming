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
        int a, b;
        cin >> a >> b;

        if (a > b)
            cout << "LOSS" << endl;
        else if (a < b)
            cout << "PROFIT" << endl;
        else
            cout << "NEUTRAL" << endl;
    }

    return 0;
}