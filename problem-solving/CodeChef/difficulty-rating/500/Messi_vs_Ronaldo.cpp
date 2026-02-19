#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if ((a * 2 + b) > (x * 2 + y))
        cout << "Messi" << endl;
    else if ((a * 2 + b) < (x * 2 + y))
        cout << "Ronaldo" << endl;
    else
        cout << "Equal" << endl;

    return 0;
}