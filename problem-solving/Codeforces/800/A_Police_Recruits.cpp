#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int recruits = 0;
    int untreated_crimes = 0;
    for (int i = 0; i < n; i++)
    {
        int crime;
        cin >> crime;

        if (crime == -1)
        {
            if (recruits > 0)
                recruits--;
            else
                untreated_crimes++;
        }
        else
            recruits += crime;
    }

    cout << untreated_crimes << endl;

    return 0;
}