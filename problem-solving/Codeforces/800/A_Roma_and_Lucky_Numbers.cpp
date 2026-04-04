#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int luckyDigits = 0;
        for (char c : s)
        {
            if (c == '4' || c == '7')
                luckyDigits++;
        }

        if (luckyDigits <= k)
            count++;
    }

    cout << count << endl;
    
    return 0;
}