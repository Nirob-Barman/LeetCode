#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1;
        int minimum = nums[0];

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] >= nums[low])
            {
                minimum = min(minimum, nums[low]);
                low = mid + 1;
            }
            else
            {
                minimum = min(minimum, nums[mid]);
                high = mid - 1;
            }
        }

        return minimum;
    }
};

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    Solution s;
    cout << s.findMin(nums) << endl; // 1
    nums = {4, 5, 6, 7, 0, 1, 2};
    cout << s.findMin(nums) << endl; // 0
    return 0;
}