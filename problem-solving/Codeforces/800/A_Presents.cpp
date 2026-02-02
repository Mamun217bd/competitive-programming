#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;
        a[p] = i;
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}