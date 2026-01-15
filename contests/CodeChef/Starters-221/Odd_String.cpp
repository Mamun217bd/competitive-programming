#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s)
            freq[c]++;

        bool check = true;
        for (auto x : freq)
        {
            if (x.second > 2)
            {
                check = false;
                break;
            }
        }

        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}