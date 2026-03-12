#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        
        if ((n * x) > k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; 
    }

    return 0;
}
