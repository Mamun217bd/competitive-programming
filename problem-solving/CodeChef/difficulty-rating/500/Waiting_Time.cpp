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
        int k, x;
        cin >> k >> x;

        cout << (k * 7) - x << endl;
    }

    return 0;
}