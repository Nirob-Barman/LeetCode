#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        int numOfTrailingZeros = 0;
        for (int i = 5; i <= n; i *= 5)
        {
            numOfTrailingZeros += n / i;
        }
        return numOfTrailingZeros;
    }
};

int main()
{
    Solution s;
    cout << s.trailingZeroes(0) << endl;
    cout << s.trailingZeroes(3) << endl;
    cout << s.trailingZeroes(5) << endl;
    cout << s.trailingZeroes(10) << endl;
    return 0;
}