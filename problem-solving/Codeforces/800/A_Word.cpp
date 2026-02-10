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
    int countC = 0, countS = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            countC++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            countS++;
    }

    if (countC > countS)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
    }

    cout << s << endl;

    return 0;
}