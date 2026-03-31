#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool check = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (v[i][j] != v[i][0])
            {
                check = false;
                break;
            }
        }

        if (!check)
            break;

        if (i > 0)
        {
            if (v[i][0] == v[i - 1][0])
            {
                check = false;
                break;
            }
        }
    }

    if (check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}