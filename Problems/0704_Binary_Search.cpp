#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high)
        {
            int mid = (low + (high - low) / 2);

            if (target == nums[mid])
            {
                return mid;
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

        return -1;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    Solution s;
    cout << s.search(nums, 0) << endl;
    cout << s.search(nums, 7) << endl;
    nums = {-1, 0, 3, 5, 9, 12};
    cout << s.search(nums, 2) << endl;
    cout << s.search(nums, -1) << endl;
    return 0;
}