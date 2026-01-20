#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 1; i < n; i += 4)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == m - 1)
                a[i][j] = '#';
            else
                a[i][j] = '.';
        }
    }

    for (int i = 3; i < n; i += 4)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
                a[i][j] = '#';
            else
                a[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
            a[i][j] = '#';
    }

    for (int i = 1; i < n; i += 2)
    {
        for (int j = 0; j < m; j += 2)
        {
            if (j != 0 && j != m - 1)
                a[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << endl;
    }

    return 0;
}