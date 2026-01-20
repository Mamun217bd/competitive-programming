#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < s.size(); i += 2)
        v.push_back(s[i] - '0');

    sort(v.begin(), v.end());

    s = "";
    for (int i = 0; i < v.size(); i++)
    {
        s += to_string(v[i]);

        if (i != v.size() - 1)
            s += "+";
    }

    cout << s << endl;

    return 0;
}