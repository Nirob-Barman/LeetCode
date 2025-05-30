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

        // for (int i = 0; i < n; i++)
        // {
        //     int complement = target - nums[i];
        //     // cout << nums[i] << " " << complement << endl;
        //     if (hashTable.count(complement))
        //     {
        //         return {hashTable[complement], i};
        //     }
        //     hashTable[nums[i]] = i; // Store the number with its index
        // }

        for (int i = 0; i < n; i++)
        {
            hashTable[nums[i]] = i;
        }
        // hashTable = {2:0, 7:1, 11:2, 15:3}
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (hashTable.count(complement) && hashTable[complement] != i)
            {
                return {i, hashTable[complement]};
            }
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

// Step 1:
// i = 0 → nums[0] = 2
// complement = 9 - 2 = 7
// Is 7 in the hash table? ❌ No.
// So we store 2 in the hash table with index 0
// → hashTable[2] = 0

// Step 2:
// i = 1 → nums[1] = 7
// complement = 9 - 7 = 2
// Is 2 in the hash table? ✅ Yes! It's at index 0.
// So we return: [0, 1] → because 2 + 7 = 9