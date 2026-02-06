#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t = 0;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        t += i;
        if (t <= n)
        {
            n -= t;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}