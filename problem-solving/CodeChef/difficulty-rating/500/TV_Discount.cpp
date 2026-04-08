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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int price1 = a - c, price2 = b - d;
        
        if (price1 < price2) 
            cout << "First" << endl;
        else if (price2 < price1) 
            cout << "Second" << endl;
        else 
            cout << "Any" << endl;
    }
    
    return 0;
}
