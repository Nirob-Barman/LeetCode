#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool hasTrailingZeros(vector<int> &nums)
    {
        int count = 0;

        for (auto num : nums)
        {
            if (num == 0)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        return count % 2 == 0;
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