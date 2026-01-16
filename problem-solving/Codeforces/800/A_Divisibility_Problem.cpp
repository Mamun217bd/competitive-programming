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

        int count = 0;
        if (a % b != 0)
            count = b - (a % b);

        cout << count << endl;
    }

    return 0;
}