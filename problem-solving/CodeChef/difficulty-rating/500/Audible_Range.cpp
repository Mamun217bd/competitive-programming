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

        if (x >= 67 && x <= 45000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}