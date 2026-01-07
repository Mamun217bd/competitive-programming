#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            b++;
    }

    if (a > b)
        cout << "Anton" << endl;
    else if (b > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}