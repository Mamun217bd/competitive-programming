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

        string a = "codeforces";

        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != a[i])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}