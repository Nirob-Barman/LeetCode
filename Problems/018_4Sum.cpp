#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<vector<int>> result;

        // for (int i = 0; i < n - 3; i++)
        // {
        //     for (int j = i + 1; j < n - 2; j++)
        //     {
        //         for (int k = j + 1; k < n - 1; k++)
        //         {
        //             for (int l = k + 1; l < n; l++)
        //             {
        //                 if ((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l] == target)
        //                 {
        //                     ans.insert({nums[i], nums[j], nums[k], nums[l]});
        //                 }
        //             }
        //         }
        //     }
        // }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                int k = j + 1, l = n - 1;
                while (k < l)
                {
                    long long sum = (long long) nums[i] + (long long) nums[j] + (long long) nums[k] + (long long) nums[l];
                    if (sum == target)
                    {
                        ans.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if (sum > target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }

        for (auto it : ans)
        {
            result.push_back(it);
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    Solution s;
    vector<vector<int>> result = s.fourSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}