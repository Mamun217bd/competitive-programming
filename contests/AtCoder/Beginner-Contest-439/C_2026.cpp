#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> count(n + 1, 0);
    int mx = sqrt(n / 2.0) + 1;

    for (int i = 1; i <= mx; i++)
    {
        int i2 = i * i;
        if (i2 >= n)
            break;

        for (int j = i + 1; i2 + j * j <= n; j++)
        {
            int x = i2 + j * j;
            count[x]++;
        }
    }

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 1)
            v.push_back(i);
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}