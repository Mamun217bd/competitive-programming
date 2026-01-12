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
    int lucky = 0, unlucky = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            lucky++;
        else
            unlucky++;
    }

    lucky > unlucky ? cout << "READY FOR BATTLE" << endl : cout << "NOT READY" << endl;

    return 0;
}