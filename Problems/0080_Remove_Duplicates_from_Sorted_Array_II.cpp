#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() <= 2)
        {
            return nums.size();
        }

        int index = 2; // Start from the third element since the first two elements are always allowed
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[index - 2])
            {
                nums[index++] = nums[i];
            }
        }

        return index;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution s;
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}