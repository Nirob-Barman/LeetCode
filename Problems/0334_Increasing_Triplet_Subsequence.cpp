#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        // TLE: O(n^3)
        // for (int i = 0; i < nums.size() - 2; i++)
        // {
        //     for (int j = i + 1; j < nums.size() - 1; j++)
        //     {
        //         for (int k = j + 1; k < nums.size(); k++)
        //         {
        //             if (nums[i] < nums[j] && nums[j] < nums[k])
        //                 return true;
        //         }
        //     }
        // }
        // return false;

        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums)
        {
            if (num <= first)
            {
                first = num;
            }
            else if (num <= second)
            {
                second = num;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << Solution().increasingTriplet(nums) << endl;

    nums = {5, 4, 3, 2, 1};
    cout << Solution().increasingTriplet(nums) << endl;
    return 0;
}
