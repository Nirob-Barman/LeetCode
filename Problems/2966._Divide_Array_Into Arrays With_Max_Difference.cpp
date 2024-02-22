#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int arraySize = nums.size();

        vector<vector<int>> expectedArray(arraySize / 3, vector<int>(3));

        int expectedArrayIndex = 0;

        for (int i = 0; i < arraySize; i += 3)
        {
            if (i + 2 < arraySize && nums[i + 2] - nums[i] <= k)
            {
                expectedArray[expectedArrayIndex][0] = nums[i];
                expectedArray[expectedArrayIndex][1] = nums[i + 1];
                expectedArray[expectedArrayIndex][2] = nums[i + 2];

                // expectedArray[expectedArrayIndex] = {nums[i], nums[i + 1], nums[i + 2]};
                expectedArrayIndex++;
            }
            else
            {
                return vector<vector<int>>();
            }
        }
        return expectedArray;
    }
};

int main()
{
    Solution s;
    // vector<int> nums = {1, 2, 3, 4};
    // vector<int> nums({3, 2, 1, 2, 3, 4, 3, 4, 5, 9, 10, 11});
    // int k = 3;

    vector<int> nums = {3, 1, 4, 2, 8, 6, 5, 7, 9};
    int k = 2;
    vector<vector<int>> result = s.divideArray(nums, k);

    if (result.empty())
    {
        cout << "NO" << endl;
    }
    else
    {
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
    }

    return 0;
}