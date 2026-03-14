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
        string s;
        cin >> s;

        int l = -1, r = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                l = i;
                break;
            }
        }

        if (l == -1)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                r = i;
                break;
            }
        }

        int count = 0;
        for (int i = l; i <= r; i++)
        {
            if (s[i] == '0')
                count++;
        }

        cout << count << endl;
    }

    return 0;
}