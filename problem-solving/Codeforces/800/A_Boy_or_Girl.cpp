#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();
    set<char> ch;
    for (int i = 0; i < n; i++)
    {
        if (ch.find(s[i]) == ch.end())
            ch.insert(s[i]);
    }

    if (ch.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}