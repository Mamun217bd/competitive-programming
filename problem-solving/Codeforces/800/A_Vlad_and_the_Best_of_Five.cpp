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

        int countA = 0, countB = 0;
        for (char c : s)
        {
            if (c == 'A')
                countA++;
            else if (c == 'B')
                countB++;
        }

        if (countA > countB)
            cout << "A" << endl;
        else if (countB > countA)
            cout << "B" << endl;
    }

    return 0;
}