#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution().moveZeroes(nums); // [1,3,12,0,0]

    for (auto num : nums)
    {
        cout << num << " ";
    }

    return 0;
}