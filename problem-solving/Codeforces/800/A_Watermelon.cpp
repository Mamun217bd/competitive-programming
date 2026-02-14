#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}