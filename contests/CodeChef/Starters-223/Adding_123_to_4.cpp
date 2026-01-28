#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int pairs1 = min(x, z),
            pairs2 = y / 2;

        int total = pairs1 + pairs2;

        cout << total << endl;
    }

    return 0;
}