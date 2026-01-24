#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    int volume = 0;
    bool is_playing = false;

    while (q--)
    {
        int a;
        cin >> a;

        if (a == 1)
            volume++;
        else if (a == 2)
        {
            if (volume >= 1)
                volume--;
        }
        else if (a == 3)
            is_playing = !is_playing;

        if (is_playing && volume >= 3)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}