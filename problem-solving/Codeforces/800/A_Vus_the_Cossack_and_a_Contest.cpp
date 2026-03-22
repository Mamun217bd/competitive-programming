#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    if (min(m, k) >= n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}