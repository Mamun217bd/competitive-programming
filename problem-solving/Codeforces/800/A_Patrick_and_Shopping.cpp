#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    ll path1 = d1 + d2 + d3,
       path2 = 2 * d1 + 2 * d2,
       path3 = 2 * d1 + 2 * d3,
       path4 = 2 * d2 + 2 * d3;

    ll min_dist = min({path1, path2, path3, path4});

    cout << min_dist << endl;

    return 0;
}