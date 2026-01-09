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
        char ch;
        cin >> ch;
        string s = "codeforces";

        if (s.find(ch) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}