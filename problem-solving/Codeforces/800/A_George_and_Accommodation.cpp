#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a = 0;
    cin >> n;

    while (n--)
    {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2)
            a++;
    }

    cout << a << endl;

    return 0;
}