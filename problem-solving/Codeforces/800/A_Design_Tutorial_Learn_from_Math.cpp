#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x = 8;
    cin >> n;

    if (n & 1)
        x++;

    cout << x << " " << n - x;

    return 0;
}