#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a, b, c, d;
    do
    {
        n++;
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d = n % 10;
    } while (a == b || a == c || a == d || b == c || b == d || c == d);

    cout << n << endl;

    return 0;
}