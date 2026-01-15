#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int count = 0;
        bool check = false;

        for (int i = 0; i < n; i++)
        {
            if (v[i] < a)
            {
                if (!check)
                {
                    count++;
                    check = true;
                }
            }
            else if (v[i] > b)
                check = false;
        }

        cout << count << endl;
    }

    return 0;
}