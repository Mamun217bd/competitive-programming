#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, s = 0;
    cin >> x;

    for (int i = 1; x > 5; i++)
    {
        x -= 5;
        s++;
    }

    if (x > 0)
        s++;

    cout << s << endl;

    return 0;
}