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
        int x;
        cin >> x;
        
        if (x < 300)
            cout << 3000 << endl;
        else
            cout << x * 10 << endl;
    }
    
    return 0;
}
