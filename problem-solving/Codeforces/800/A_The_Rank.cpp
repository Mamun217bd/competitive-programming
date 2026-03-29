#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(4));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    }

    vector<int> sum(n);
    for (int i = 0; i < n; i++)
        sum[i] = a[i][0] + a[i][1] + a[i][2] + a[i][3];

    int s = sum[0];

    sort(sum.begin(), sum.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (sum[i] == s)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}