#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int max_lemons = min({a, b / 2, c / 4});

    int total_fruits = max_lemons * 7;

    cout << total_fruits << endl;

    return 0;
}