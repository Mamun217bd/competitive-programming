#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string sequence = "";
    for (int i = 1; sequence.length() < n; i++)
        sequence += to_string(i);

    cout << sequence[n - 1] << endl;

    return 0;
}