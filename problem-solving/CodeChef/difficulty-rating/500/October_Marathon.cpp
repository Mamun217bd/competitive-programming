#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    if (x < 3)
        cout << "GOLD" << endl;
    else if (x < 6)
        cout << "SILVER" << endl;
    else
        cout << "BRONZE" << endl;

    return 0;
}