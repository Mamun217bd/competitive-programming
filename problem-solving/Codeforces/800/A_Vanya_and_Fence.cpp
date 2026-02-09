#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;

    int a;
    int count = 0;
    while (cin >> a)
    {
        if (a > h)
            count += 2;
        else
            count++;
    }

    cout << count << endl;

    return 0;
}