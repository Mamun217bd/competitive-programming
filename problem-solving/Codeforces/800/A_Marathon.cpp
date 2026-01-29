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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x = 0;
        if (a < b)
            x++;
        if (a < c)
            x++;
        if (a < d)
            x++;

        cout << x << endl;
    }
    
    return 0;
}