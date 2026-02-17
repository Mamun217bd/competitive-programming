#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x = 0;
    string a;
    while (n--)
    {
        cin >> a;
        if (a[0] == '+' || a[2] == '+')
            x++;
        else if (a[0] == '-' || a[2] == '-')
            x--;
    }

    cout << x << endl;

    return 0;
}