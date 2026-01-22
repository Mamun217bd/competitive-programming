#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s1, s2, s3, s4;
    s1 = "I hate",
    s2 = "I love",
    s3 = "that",
    s4 = "it";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            cout << s1;
        else
            cout << s2;
        if (i == n)
            cout << " " << s4 << endl;
        else
            cout << " " << s3 << " ";
    }

    return 0;
}