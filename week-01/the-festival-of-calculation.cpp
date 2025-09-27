#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int factorials[4] = {1, 2, 6, 24}; // 1!, 2!, 3!, 4!

    int result;
    if (n >= 4)
    {
        // If n>=4 we only need the factorial sum upto 4.
        // since the sum of factorials from 5 to n is always divisible by 5 as it has a multiple of 5 in itself
        int sum = factorials[0] + factorials[1] + factorials[2] + factorials[3];
        result = sum % 5;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += factorials[i];
        }
        result = sum % 5;
    }

    cout << result << endl;
    return 0;
}