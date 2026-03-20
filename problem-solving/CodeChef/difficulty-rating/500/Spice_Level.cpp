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
        
        if(x < 4)
            cout << "MILD" << endl;
        else if(x < 7)
            cout << "MEDIUM" << endl;
        else
            cout << "HOT" << endl;
    }
    
    return 0;
}
