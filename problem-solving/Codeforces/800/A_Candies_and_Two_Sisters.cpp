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
        int n;
        cin >> n;

        if (n < 3)
            cout << 0 << endl;
        else
            cout << (n - 1) / 2 << endl;
    }

    return 0;
}