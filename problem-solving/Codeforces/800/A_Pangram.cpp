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

    set<char> st;
    for (char c : s)
    {
        if (isalpha(c))
            st.insert(tolower(c));
    }

    if (st.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}