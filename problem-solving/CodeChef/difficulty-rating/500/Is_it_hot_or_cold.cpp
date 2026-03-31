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
        int c;
        cin >> c;
        
        if(c > 20)
            cout << "HOT" << endl;
        else
            cout << "COLD" << endl;
    }
    
    return 0;
}
