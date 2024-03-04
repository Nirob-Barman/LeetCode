#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 1;

        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[j - 1])
            {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 4, 4};
    Solution s;
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}