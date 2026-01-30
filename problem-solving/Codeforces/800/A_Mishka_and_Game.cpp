#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int countm = 0, countc = 0;
    while (n--)
    {
        int m, c;
        cin >> m >> c;

        if (m > c)
            countm++;
        else if (c > m)
            countc++;
    }

    if (countm > countc)
        cout << "Mishka" << endl;
    else if (countc > countm)
        cout << "Chris" << endl;
    else if (countm == countc)
        cout << "Friendship is magic!^^" << endl;

    return 0;
}