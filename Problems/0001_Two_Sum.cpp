#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] + nums[j] == target)
        //         {
        //             return {i, j};
        //         }
        //     }
        // }

        unordered_map<int, int> hashTable;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            // cout << nums[i] << " " << complement << endl;
            if (hashTable.count(complement))
            {
                return {hashTable[complement], i};
            }
            hashTable[nums[i]] = i;
        }
        return {-1, -1}; // not found
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl; // 0 1
    return 0;
}