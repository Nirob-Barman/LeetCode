#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] == target)
            {
                return true;
            }

            if(nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                low++;
                high--;

                continue; // skip the duplicates and check the next element
            }

            // if the target is the low to mid of the array
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target && target <= nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            // if the target is the high to mid of the array
            else
            {
                if(nums[mid] <= target && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    cout << s.search(nums, target) << endl; // true
    nums = {2, 5, 6, 0, 0, 1, 2};
    target = 3;
    cout << s.search(nums, target) << endl; // false
    return 0;
}