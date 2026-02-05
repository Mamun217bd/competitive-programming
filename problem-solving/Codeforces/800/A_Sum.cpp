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
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || b + c == a || c + a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}