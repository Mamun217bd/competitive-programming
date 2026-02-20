#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string str = s1 + s2;
    sort(str.begin(), str.end());
    sort(s3.begin(), s3.end());

    if (str == s3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}