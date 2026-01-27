#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << "HARD" << endl;
            break;
        }
        else
            count++;
    }

    if (count == n)
        cout << "EASY" << endl;

    return 0;
}