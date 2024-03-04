#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;

        generatePermuations(nums, 0, nums.size() - 1, result);

        return result;
    }

private:
    void generatePermuations(vector<int> &nums, int start, int end, vector<vector<int>> &result)
    {
        if (start == end)
        {
            result.push_back(nums);
            return;
        }

        for (int i = start; i <= end; i++)
        {
            swap(nums[start], nums[i]);
            generatePermuations(nums, start + 1, end, result);
            swap(nums[start], nums[i]);
        }
    }
};

int main()
{
    // vector<int> nums = {1, 2, 3};
    vector<int> nums = {0, -1, 1};
    Solution s;
    vector<vector<int>> result = s.permute(nums);

    // for (int i = 0; i < result.size(); i++)
    // {
    //     for (int j = 0; j < result[i].size(); j++)
    //     {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (auto row : result)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}