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
        
        cout << (x * 60) / 30 << endl;
    }
    
    return 0;
}
