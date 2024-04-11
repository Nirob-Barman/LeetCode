#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;

        // if both are same sign then return 1 means positive
        bool isPositive = (dividend < 0 == divisor < 0);

        long long newDividend = abs(dividend);
        long long newDivisor = abs(divisor);

        long long int quotient = 0;

        while (newDividend >= newDivisor)
        {
            long long int temp = newDivisor;
            long long int multiple = 1;
            while (newDividend >= (temp << 1))
            {
                temp = temp << 1;
                multiple = multiple << 1;
            }

            quotient += multiple;
            newDividend -= temp;
        }

        if (!isPositive)
        {
            quotient = -quotient;
        }

        return quotient;
    }
};

int main()
{
    Solution s;
    cout << s.divide(10, 3) << endl;
    cout << s.divide(7, -3) << endl;
    cout << s.divide(8, 4) << endl;
    return 0;
}