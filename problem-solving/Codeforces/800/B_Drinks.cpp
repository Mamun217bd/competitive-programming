#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<double> a(n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += (a[i] / 100);
    }

    double ans = (sum / n) * 100;

    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}