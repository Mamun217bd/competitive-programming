#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    bool check = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[t.size() - 1 - i])
        {
            check = false;
            break;
        }
    }

    if (s.size() != t.size())
        check = false;

    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}