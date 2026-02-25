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

        int jars = 3 * n;

        cout << (jars * 4) / 6 << endl;
    }

    return 0;
}