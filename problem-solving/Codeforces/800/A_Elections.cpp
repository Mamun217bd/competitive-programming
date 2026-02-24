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
        vector<int> votes(3);
        for (int i = 0; i < 3; i++)
            cin >> votes[i];

        int max_votes = *max_element(votes.begin(), votes.end());
        int max_count = count(votes.begin(), votes.end(), max_votes);

        for (int i = 0; i < 3; i++)
        {
            if (votes[i] == max_votes)
            {
                if (max_count > 1)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            else
                cout << max_votes - votes[i] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}