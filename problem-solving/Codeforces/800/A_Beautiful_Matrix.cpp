#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> a(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    }

    if (a[2][2] == 1)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (a[i][j] == 1)
                {
                    cout << abs(2 - i) + abs(2 - j) << endl;
                    break;
                }
            }
        }
    }

    return 0;
}