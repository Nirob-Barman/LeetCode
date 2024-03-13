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