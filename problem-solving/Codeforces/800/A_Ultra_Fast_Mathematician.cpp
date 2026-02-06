#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a;
    cin >> b;

    string result = "";
    for (int i = 0; i < a.length(); i++)
        result += (a[i] == b[i]) ? '0' : '1';

    cout << result << endl;

    return 0;
}