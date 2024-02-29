#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        if (n < 0)
        {
            n = abs(n);
            x = 1 / x;
        }

        if (n % 2 == 0)
        {
            return myPow(x * x, n / 2);
        }
        else
        {
            return x * myPow(x * x, n / 2);
        }
    }
};

int main()
{
    Solution s;
    cout << s.myPow(2.0, 1) << endl;  // 2
    cout << s.myPow(2.0, 10) << endl; // 1024
    cout << s.myPow(2.1, 3) << endl;  // 9.261000000000001
    cout << s.myPow(2.0, -2) << endl; // 0.25
    return 0;
}