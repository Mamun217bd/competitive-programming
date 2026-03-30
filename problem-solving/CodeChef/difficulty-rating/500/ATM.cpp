#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x, y;
    cin >> x >> y;
        
    if((int)x % 5 == 0 && y >= x + 0.50)
        y -= (x + 0.50);
    
    cout << fixed << setprecision(2) << y << endl;
    
    return 0;
}
