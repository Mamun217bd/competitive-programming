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
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int candy;
            cin >> candy;
            freq[candy]++;
        }
        int mostFreq = -1;
        int maxfreq = 0;

        for (auto p : freq)
        {
            int color = p.first;
            int freq = p.second;

            if (freq > maxfreq)
            {
                maxfreq = freq;
                mostFreq = color;
            }
        }

        cout << mostFreq << endl;
    }

    return 0;
}