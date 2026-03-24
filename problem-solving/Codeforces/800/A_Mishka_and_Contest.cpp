#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[0] <= k)
            a.erase(a.begin());
        else if (a[a.size() - 1] <= k)
            a.pop_back();
        else
            break;
    }

    cout << count - a.size() << endl;

    return 0;
}