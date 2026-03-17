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
        int x;
        cin >> x;

        string s = to_string(x);
        int len = s.length(),
            first_digit = s[0] - '0';

        int total_presses = (first_digit - 1) * 10 + (len * (len + 1) / 2);

        cout << total_presses << endl;
    }

    return 0;
}