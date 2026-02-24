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
        int x;
        cin >> x;

        if (x < 3)
            cout << "LIGHT" << endl;
        else if (x < 7)
            cout << "MODERATE" << endl;
        else
            cout << "HEAVY" << endl;
    }

    return 0;
}