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
        int n;
        cin >> n;

        string s;
        cin >> s;

        for (char &c : s)
            c = tolower(c);

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        int max1 = 0, max2 = 0;
        for (int f : freq)
        {
            if (f > max1)
            {
                max2 = max1;
                max1 = f;
            }
            else if (f > max2)
                max2 = f;
        }

        cout << max1 + max2 << endl;
    }

    return 0;
}