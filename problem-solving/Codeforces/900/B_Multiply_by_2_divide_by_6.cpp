#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        int count2 = 0;
        int count3 = 0;

        while (n % 2 == 0)
        {
            n /= 2;
            count2++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            count3++;
        }

        if (n == 1 && count3 >= count2)
            cout << count3 + (count3 - count2) << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}