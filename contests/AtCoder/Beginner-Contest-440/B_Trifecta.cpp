#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].first;
        t[i].second = i + 1;
    }

    sort(t.begin(), t.end());

    for (int i = 0; i < 3; i++)
        cout << t[i].second << " ";
    cout << endl;

    return 0;
}