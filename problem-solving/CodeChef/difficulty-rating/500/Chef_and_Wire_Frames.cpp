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
        int n, m, x;
        cin >> n >> m >> x;
        
        cout << 2 * (n + m) * x << endl;
    }
    
    return 0;
}
