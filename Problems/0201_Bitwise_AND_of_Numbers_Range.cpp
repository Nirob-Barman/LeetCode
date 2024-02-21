#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        int removedBits = 0;
        while (left != right)
        {
            left = left >> 1;
            right = right >> 1;
            removedBits++;
        }
        return left << removedBits;
    }
};

int main()
{
    Solution s;
    int left = 5;
    int right = 7;
    cout << s.rangeBitwiseAnd(left, right) << endl;
    cout << s.rangeBitwiseAnd(0, 0) << endl;
    cout << s.rangeBitwiseAnd(0, 1) << endl;
    cout << s.rangeBitwiseAnd(1, 2147483647) << endl;
    return 0;
}