#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool hasTrailingZeros(vector<int> &nums)
    {
        int evenCount = 0;

        for (auto num : nums)
        {
            if (num % 2 == 0)
            {
                evenCount++;
            }
        }

        return evenCount >= 2;
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 1};
    Solution s;
    cout << s.hasTrailingZeros(nums) << endl;
    nums = {1, 2, 3, 4, 5};
    cout << s.hasTrailingZeros(nums) << endl;
    return 0;
}