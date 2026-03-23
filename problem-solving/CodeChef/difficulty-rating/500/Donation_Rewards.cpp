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
        
        if (x <= 3)
            cout << "BRONZE" << endl;
        else if(x <= 6)
            cout << "SILVER" << endl;
        else
            cout << "GOLD" << endl;
    }
    
    return 0;
}
