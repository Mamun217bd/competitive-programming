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
        
        if (x * 3 > y)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}
