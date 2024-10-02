#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int closestNumber = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (abs(nums[i]) < abs(closestNumber) || (abs(nums[i]) == abs(closestNumber) && nums[i] > closestNumber))
            {
                closestNumber = nums[i];
            }
        }

        return closestNumber;
    }
};

int main()
{
    vector<int> nums = {-4, -2, 1, 4, 8};
    Solution s;
    cout << s.findClosestNumber(nums) << endl;
    nums = {2, -1, 1};
    cout << s.findClosestNumber(nums) << endl;
    return 0;
}