#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> round_numbers;
        int place = 1, temp = n;

        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit != 0)
                round_numbers.push_back(digit * place);
            place *= 10;
            temp /= 10;
        }

        cout << round_numbers.size() << endl;
        for (int i = 0; i < round_numbers.size(); i++)
            cout << round_numbers[i] << " ";
        cout << endl;
    }

    return 0;
}