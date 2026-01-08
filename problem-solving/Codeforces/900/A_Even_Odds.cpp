#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2)
        cout << k * 2 - 1 << endl;
    else
        cout << (k - (n + 1) / 2) * 2 << endl;

    return 0;
}