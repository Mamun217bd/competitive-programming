#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int x, y;
        cin >> x >> y;
        
        if (y <= 5 * x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
