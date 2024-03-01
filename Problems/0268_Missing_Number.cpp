#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // int n = nums.size();
        // int sum = n * (n + 1) / 2;
        // for (int i = 0; i < n; i++)
        // {
        //     sum -= nums[i];
        // }
        // return sum; // here, sum is the missing number

        sort(nums.begin(), nums.end());

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if (nums[i] != i)
        //     {
        //         return i;
        //     }
        // }

        // return nums.size();

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == mid)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        // After the loop, 'left' represents the first index where the number is not equal to its index
        return left;
    }
};

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    Solution s;
    cout << s.missingNumber(nums) << endl;
    return 0;
}

// Let's take the sorted array nums = [0, 1, 3]
// The missing number is 2
// initialy left = 0, right = 2
// first iteration, calculate mid = (left + right) / 2 = (0 + 2) / 2 = 1
// check nums[1] == 1. update left = mid + 1 = 2

// second iteration, left is now equal to right

// After the loop, 'left' represents the first index where the number is not equal to its index
// 2