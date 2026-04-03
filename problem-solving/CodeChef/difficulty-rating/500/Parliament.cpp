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
        int n, x;
        cin >> n >> x;
        
        if(2 * x >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
