#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int a = s.length();
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == '1')
            ans += a1;
        else if (s[i] == '2')
            ans += a2;
        else if (s[i] == '3')
            ans += a3;
        else if (s[i] == '4')
            ans += a4;
    }

    cout << ans << endl;

    return 0;
}