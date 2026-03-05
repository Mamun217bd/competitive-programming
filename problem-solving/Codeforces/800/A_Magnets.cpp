#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        string t;
        cin >> t;

        if (s[1] == t[0])
            count++;

        s = t;
    }

    cout << count << endl;

    return 0;
}