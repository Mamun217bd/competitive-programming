#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int digit1 = n / 100, digit2 = (n / 10) % 10, digit3 = n % 10;

    if (digit1 == digit2 && digit2 == digit3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}