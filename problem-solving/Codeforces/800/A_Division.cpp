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
        int n, X;
        cin >> n;

        if (n >= 1900)
            X = 1;
        else if (n >= 1600 && n <= 1899)
            X = 2;
        else if (n >= 1400 && n <= 1599)
            X = 3;
        else if (n <= 1399)
            X = 4;

        cout << "Division " << X << endl;
    }

    return 0;
}