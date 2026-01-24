#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count = 0;
    for (char c : s)
    {
        if (c == 'i' || c == 'j')
            count++;
    }

    cout << count << endl;

    return 0;
}