#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "Tetrahedron")
            total += 4;
        else if (s == "Cube")
            total += 6;
        else if (s == "Octahedron")
            total += 8;
        else if (s == "Dodecahedron")
            total += 12;
        else if (s == "Icosahedron")
            total += 20;
    }

    cout << total << endl;

    return 0;
}