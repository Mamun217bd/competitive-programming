#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll ans = 0;
    if (n % 2 == 0)
        ans = n / 2;
    else
        ans = -(n / 2 + 1);

    cout << ans << endl;

    return 0;
}