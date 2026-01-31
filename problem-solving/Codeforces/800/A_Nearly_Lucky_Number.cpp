#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll int n;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int x = n % 10;
        if (x == 4 || x == 7)
            count++;
        n /= 10;
    }

    bool check = false;
    while (count > 0)
    {
        int x = count % 10;
        if (x != 4 && x != 7)
        {
            check = false;
            break;
        }
        check = true;
        count /= 10;
    }

    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}