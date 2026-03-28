#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count_a = count(s.begin(), s.end(), 'a'), n = s.length();
    int max_length = count_a + min(n - count_a, count_a - 1);

    cout << max_length << endl;

    return 0;
}