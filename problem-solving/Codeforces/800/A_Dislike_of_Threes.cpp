#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int current_num = 0, count = 0;

        while (count != k)
        {
            current_num++;
            if (current_num % 3 != 0 && current_num % 10 != 3)
                count++;
        }

        cout << current_num << endl;
    }

    return 0;
}