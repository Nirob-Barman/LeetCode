#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();
        int numOfSubsets = 1 << n;
        // cout << numOfSubsets << endl;
        vector<vector<int>> subsets;

        // Run i from 000..0 to 111..1
        for (int i = 0; i < numOfSubsets; i++)
        {
            vector<int> subset;

            for (int j = 0; j < n; j++)
            {
                // Check i & (1 << j) = 1 if jth bit is set
                if (i & (1 << j))
                {
                    subset.push_back(nums[j]);
                }
            }
            subsets.push_back(subset);
        }

        return subsets;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    Solution sol;
    vector<vector<int>> subsets = sol.subsets(nums);
    for (auto subset : subsets)
    {
        for (auto num : subset)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}

// Set  = [a,b,c]
// 000 = []
// 001 = [a]
// 010 = [b]
// 011 = [a,b]
// 100 = [c]
// 101 = [a,c]
// 110 = [b,c]
// 111 = [a,b,c]

// 1 << 0 = 0001
// 1 << 1 = 0010
// 1 << 2 = 0100
// 1 << 3 = 1000
// 1 << 4 = 10000
// it follows 2^n

// Each number i in that range represents a subset based on its binary representation:
//
//  i   Binary   Meaning             Subset
// ----------------------------------------------
//  0   000      no bits set         []
//  1   001      only 0th bit set    [1]
//  2   010      only 1st bit set    [2]
//  3   011      0th and 1st         [1, 2]
//  4   100      only 2nd bit set    [3]
//  5   101      0th and 2nd         [1, 3]
//  6   110      1st and 2nd         [2, 3]
//  7   111      all bits set        [1, 2, 3]

// Example: nums = [1, 2, 3], i = 5 (binary 101)
// This loop checks each bit of i to decide which nums[j] to include.
//
// j   1 << j (binary)   i (5 = 101) & (1 << j)     Bit set?   Include nums[j]?
// ------------------------------------------------------------------------------
// 0   001               101 & 001 = 001 (true)     Yes        nums[0] = 1
// 1   010               101 & 010 = 000 (false)    No         (skip)
// 2   100               101 & 100 = 100 (true)     Yes        nums[2] = 3
//
// Final subset generated: [1, 3]
