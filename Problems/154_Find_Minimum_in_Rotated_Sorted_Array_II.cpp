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

            if (nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                minimum = min(minimum, nums[low]);
                low++;
                high--;

                continue; // skip the duplicates and check the next element
            }

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
    Solution s;
    vector<int> nums = {1, 3, 5};
    cout << s.findMin(nums) << endl; // 1
    nums = {2, 2, 2, 0, 1};
    cout << s.findMin(nums) << endl; // 0
    return 0;
}