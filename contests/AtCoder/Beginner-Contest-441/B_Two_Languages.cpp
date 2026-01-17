#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    set<char> takahashi(s.begin(), s.end());
    set<char> aoki(t.begin(), t.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string w;
        cin >> w;

        bool all_takahashi = true, all_aoki = true;
        bool only_takahashi = false, only_aoki = false;

        for (char c : w)
        {
            bool check_takahashi = takahashi.count(c) > 0;
            bool check_aoki = aoki.count(c) > 0;

            if (!check_takahashi)
                all_takahashi = false;
            if (!check_aoki)
                all_aoki = false;

            if (check_takahashi && !check_aoki)
                only_takahashi = true;
            if (check_aoki && !check_takahashi)
                only_aoki = true;
        }

        if (all_takahashi && only_takahashi)
            cout << "Takahashi" << endl;
        else if (all_aoki && only_aoki)
            cout << "Aoki" << endl;
        else
            cout << "Unknown" << endl;
    }

    return 0;
}