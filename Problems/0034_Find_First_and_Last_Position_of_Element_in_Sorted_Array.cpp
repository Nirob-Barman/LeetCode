#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int lowerBound = implementLowerBound(nums, target);
        int upperBound = implementUpperBound(nums, target);

        // cout << lowerBound << " " << upperBound << endl;

        return {lowerBound, upperBound};
    }

    int implementLowerBound(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high)
        {
            int mid = (low + (high - low) / 2);

            if (nums[mid] == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }

    int implementUpperBound(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high)
        {
            int mid = (low + (high - low) / 2);

            if (nums[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = Solution().searchRange(nums, target);
    cout << result[0] << " " << result[1] << endl; // 3 4

    nums = {5, 7, 7, 8, 8, 10};
    target = 6;
    result = Solution().searchRange(nums, target);
    cout << result[0] << " " << result[1] << endl; // -1 -1
    return 0;
}