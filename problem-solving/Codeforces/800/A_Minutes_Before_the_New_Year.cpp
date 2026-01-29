#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int h, m;
        cin >> h >> m;

        int minutes = (23 - h) * 60 + (60 - m);

        cout << minutes << endl;
    }

    return 0;
}