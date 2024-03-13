#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
            return false;

        // while (n % 4 == 0)
        //     n /= 4;

        // return n == 1;

        double x = log10(n) / log10(4);

        // return floor(x) == ceil(x);
        // return (x - floor(x) == 0);
        return (x - int(x) == 0);
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfFour(16) << endl; // true
    cout << s.isPowerOfFour(5) << endl;  // false
    cout << s.isPowerOfFour(1) << endl;  // true
    cout << s.isPowerOfFour(64) << endl; // true
    return 0;
}

// Log base Change Formula
// Logb(a) = Logd(a)/Logd(b)

// Given: a^x = M
// We know that if a^x = M, then log_a(M) = x
// For example, if 4^3 = 64, then log_4(64) = log_4(4^3) = 3 * log_4(4) = 3
// Now, we will check if the number is a power of 4 or not.
// If 64 = 4^3, then log_10(64) / log_10(4) should equal 3.