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
        int x, y, z;
        cin >> x >> y >> z;
        
        if(x > y && x > z)
            cout << "Setter" << endl;
        else if(y > x && y > z)
            cout << "Tester" << endl;
        else
            cout << "Editorialist" << endl;
    }
    
    return 0;
}
