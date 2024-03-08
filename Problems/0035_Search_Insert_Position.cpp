#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        if (target > nums[high])
            return high + 1;

        while (low <= high)
        {
            int mid = (low + (high - low) / 2);

            if (target == nums[mid])
                return mid;
            else if (target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return low;
    }
};

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    cout << Solution().searchInsert(nums, 5) << endl; //   2
    cout << Solution().searchInsert(nums, 2) << endl; //   1
    cout << Solution().searchInsert(nums, 7) << endl; //   4

    nums = {1};
    cout << Solution().searchInsert(nums, 1) << endl;

    return 0;
}