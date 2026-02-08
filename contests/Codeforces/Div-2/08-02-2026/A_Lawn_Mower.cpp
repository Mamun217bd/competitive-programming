#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, w;
        cin >> n >> w;

        if (w > n)
            cout << n << endl;
        else
        {
            ll keep = n / w;
            cout << n - keep << endl;
        }
    }

    return 0;
}