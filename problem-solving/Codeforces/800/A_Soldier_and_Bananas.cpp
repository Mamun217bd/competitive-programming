#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, w;
    cin >> k >> n >> w;

    int price = 0;

    for (int i = 1; i <= w; i++)
        price += i * k;

    if (price > n)
        cout << price - n << endl;
    else
        cout << 0 << endl;

    return 0;
}