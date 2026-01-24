#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<set<int>> conflicts(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        conflicts[a].insert(b);
        conflicts[b].insert(a);
    }

    for (int i = 1; i <= n; i++)
    {
        int total = n - 1,
            count = conflicts[i].size(),
            valid = total - count;
        ll answer;

        if (valid < 3)
            answer = 0;
        else
            answer = (ll)valid * (valid - 1) * (valid - 2) / 6;

        cout << answer << " ";
    }
    cout << endl;

    return 0;
}