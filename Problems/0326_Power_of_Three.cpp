#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        // if (n <= 0)
        //     return false;

        // while (n % 3 == 0)
        // {
        //     n /= 3;
        // }

        // return n == 1;

        if (n <= 0)
            return false;

        double p = log10(n) / log10(3);

        // checking to see if p is an integer or not
        // return (p == floor(p));
        return (p == int(p));
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfThree(0) << endl;  // false
    cout << s.isPowerOfThree(1) << endl;  // true
    cout << s.isPowerOfThree(2) << endl;  // false
    cout << s.isPowerOfThree(9) << endl;  // true
    cout << s.isPowerOfThree(27) << endl; // true
    return 0;
}

// General Solution to check if any number N is a power of P:
// log3(81) = 4
// log2(32) = 5

// if any number b is a power of a then log b to the base a will always
// give an integer as illustrated below
// loga(b) = log(b) / log(a)
// Therefore, power can be calculated as: power(p) = log(b) / log(a)
// If p is not an integer then b is not a power of a

// like if a^x = M then loga(M) = x
