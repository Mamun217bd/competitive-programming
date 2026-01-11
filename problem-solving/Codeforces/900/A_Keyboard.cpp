#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char direction;
    string input;
    cin >> direction;
    cin >> input;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./",
           result = "";

    for (char c : input)
    {
        int index = keyboard.find(c);
        if (direction == 'R')
            result += keyboard[index - 1];
        else if (direction == 'L')
            result += keyboard[index + 1];
    }

    cout << result << endl;

    return 0;
}