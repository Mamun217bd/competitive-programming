#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == '0')
        {
            count = 0;
            while (i < s.size() && s[i] == '0')
            {
                count++;
                i++;
            }

            if (count >= 7)
                break;
        }
        else if (s[i] == '1')
        {
            count = 0;
            while (i < s.size() && s[i] == '1')
            {
                count++;
                i++;
            }

            if (count >= 7)
                break;
        }
    }

    if (count >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;

}
