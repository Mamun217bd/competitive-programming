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
        
        if(x < y)
            cout << "FIRST" << endl;
        else if(x > y)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }
    
    return 0;
}
