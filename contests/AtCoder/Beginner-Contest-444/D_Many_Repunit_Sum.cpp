#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    int max_a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }

    vector<ll> count(max_a + 2, 0);
    for (int x : a)
    {
        count[1]++;
        if (x + 1 <= max_a)
            count[x + 1]--;
    }

    for (int i = 1; i <= max_a; i++)
        count[i] += count[i - 1];

    vector<int> result;
    ll carry = 0;

    for (int i = 1; i <= max_a; i++)
    {
        ll cur = count[i] + carry;
        result.push_back(cur % 10);
        carry = cur / 10;
    }

    while (carry > 0)
    {
        result.push_back(carry % 10);
        carry /= 10;
    }

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];

    cout << endl;

    return 0;
}