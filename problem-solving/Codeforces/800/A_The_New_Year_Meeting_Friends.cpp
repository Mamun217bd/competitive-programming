#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    cout << max({x1, x2, x3}) - min({x1, x2, x3}) << endl;

    return 0;
}