#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int slow = n, fast = n;

    do
    {
        int sum = 0, temp = slow;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }

        slow = sum;

        for (int i = 0; i < 2; i++)
        {
            sum = 0;
            temp = fast;
            while (temp > 0)
            {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
            fast = sum;
        }
    } while (slow != fast);

    if (slow == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}