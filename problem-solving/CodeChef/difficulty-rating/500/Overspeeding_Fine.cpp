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

        if (x <= 70)
            cout << "0" << endl;
        else if (x > 70 && x <= 100)
            cout << "500" << endl;
        else
            cout << "2000" << endl;
    }

    return 0;
}