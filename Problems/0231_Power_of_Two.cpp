#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // if (n == 0)
        //     return false;
        // while (n != 1)
        // {
        //     if (n % 2 != 0)
        //         return false;
        //     n = n / 2;
        // }
        // return true;

        // bitwise example
        // 8 & (8-1) = 1000 & 0111 = 0000
        // 3 & (3-1) = 0011 & 0010 = 0010
        // if a & (a-1) == 0 then it is power of 2
        if (n <= 0)
            return false;
        else
            return !(n & (n - 1));
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfTwo(3) << endl;
    cout << s.isPowerOfTwo(8) << endl;
    return 0;
}
