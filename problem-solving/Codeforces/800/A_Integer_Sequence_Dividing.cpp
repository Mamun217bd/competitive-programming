#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    if (n % 4 == 0 || n % 4 == 3)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}