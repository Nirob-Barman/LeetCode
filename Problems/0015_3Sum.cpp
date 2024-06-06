#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> s;
        vector<vector<int>> result;

        int target = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int left = i + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                {
                    // result.push_back({nums[i], nums[left], nums[right]});
                    s.insert({nums[i], nums[left], nums[right]}); // unique solution
                    // cout << "Found solution in iteration " << i << " index value " << nums[i] << nums[left] << " and " << nums[right] << endl;
                    // cout << nums[i] << " " << nums[left] << " " << nums[right] << endl;
                    left++;
                    right--;
                }
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }
        for (auto triples : s)
            result.push_back(triples);
        return result;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution s;
    vector<vector<int>> result = s.threeSum(nums);

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