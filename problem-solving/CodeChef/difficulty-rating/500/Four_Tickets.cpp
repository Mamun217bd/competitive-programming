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

        if (x * 4 <= 1000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}